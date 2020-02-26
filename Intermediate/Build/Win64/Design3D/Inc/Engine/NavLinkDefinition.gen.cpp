// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/Navigation/NavLinkDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkDefinition() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationSegmentLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLinkBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkDefinition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkDefinition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ENavLinkDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavLinkDirection, Z_Construct_UPackage__Script_Engine(), TEXT("ENavLinkDirection"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavLinkDirection::Type>()
	{
		return ENavLinkDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavLinkDirection(ENavLinkDirection_StaticEnum, TEXT("/Script/Engine"), TEXT("ENavLinkDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENavLinkDirection_Hash() { return 960711398U; }
	UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavLinkDirection"), 0, Get_Z_Construct_UEnum_Engine_ENavLinkDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavLinkDirection::BothWays", (int64)ENavLinkDirection::BothWays },
				{ "ENavLinkDirection::LeftToRight", (int64)ENavLinkDirection::LeftToRight },
				{ "ENavLinkDirection::RightToLeft", (int64)ENavLinkDirection::RightToLeft },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENavLinkDirection",
				"ENavLinkDirection::Type",
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
class UScriptStruct* FNavigationSegmentLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavigationSegmentLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationSegmentLink, Z_Construct_UPackage__Script_Engine(), TEXT("NavigationSegmentLink"), sizeof(FNavigationSegmentLink), Get_Z_Construct_UScriptStruct_FNavigationSegmentLink_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavigationSegmentLink>()
{
	return FNavigationSegmentLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationSegmentLink(FNavigationSegmentLink::StaticStruct, TEXT("/Script/Engine"), TEXT("NavigationSegmentLink"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavigationSegmentLink
{
	FScriptStruct_Engine_StaticRegisterNativesFNavigationSegmentLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavigationSegmentLink")),new UScriptStruct::TCppStructOps<FNavigationSegmentLink>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavigationSegmentLink;
	struct Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationSegmentLink>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightEnd_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightEnd = { "RightEnd", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationSegmentLink, RightEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightEnd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightStart_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightStart = { "RightStart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationSegmentLink, RightStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightStart_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftEnd_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftEnd = { "LeftEnd", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationSegmentLink, LeftEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftEnd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftStart_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftStart = { "LeftStart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationSegmentLink, LeftStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftStart_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftStart,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FNavigationLinkBase,
		&NewStructOps,
		"NavigationSegmentLink",
		sizeof(FNavigationSegmentLink),
		alignof(FNavigationSegmentLink),
		Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationSegmentLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationSegmentLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationSegmentLink"), sizeof(FNavigationSegmentLink), Get_Z_Construct_UScriptStruct_FNavigationSegmentLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationSegmentLink_Hash() { return 3578129759U; }
class UScriptStruct* FNavigationLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavigationLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationLink, Z_Construct_UPackage__Script_Engine(), TEXT("NavigationLink"), sizeof(FNavigationLink), Get_Z_Construct_UScriptStruct_FNavigationLink_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavigationLink>()
{
	return FNavigationLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationLink(FNavigationLink::StaticStruct, TEXT("/Script/Engine"), TEXT("NavigationLink"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavigationLink
{
	FScriptStruct_Engine_StaticRegisterNativesFNavigationLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavigationLink")),new UScriptStruct::TCppStructOps<FNavigationLink>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavigationLink;
	struct Z_Construct_UScriptStruct_FNavigationLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Left;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationLink>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationLink, Right), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Right_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationLink, Left), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Left_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Left_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Left,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FNavigationLinkBase,
		&NewStructOps,
		"NavigationLink",
		sizeof(FNavigationLink),
		alignof(FNavigationLink),
		Z_Construct_UScriptStruct_FNavigationLink_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLink_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationLink"), sizeof(FNavigationLink), Get_Z_Construct_UScriptStruct_FNavigationLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavigationLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationLink_Hash() { return 3592814882U; }
class UScriptStruct* FNavigationLinkBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavigationLinkBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationLinkBase, Z_Construct_UPackage__Script_Engine(), TEXT("NavigationLinkBase"), sizeof(FNavigationLinkBase), Get_Z_Construct_UScriptStruct_FNavigationLinkBase_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavigationLinkBase>()
{
	return FNavigationLinkBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationLinkBase(FNavigationLinkBase::StaticStruct, TEXT("/Script/Engine"), TEXT("NavigationLinkBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavigationLinkBase
{
	FScriptStruct_Engine_StaticRegisterNativesFNavigationLinkBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavigationLinkBase")),new UScriptStruct::TCppStructOps<FNavigationLinkBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavigationLinkBase;
	struct Z_Construct_UScriptStruct_FNavigationLinkBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag7_MetaData[];
#endif
		static void NewProp_bCustomFlag7_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag6_MetaData[];
#endif
		static void NewProp_bCustomFlag6_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag5_MetaData[];
#endif
		static void NewProp_bCustomFlag5_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag4_MetaData[];
#endif
		static void NewProp_bCustomFlag4_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag3_MetaData[];
#endif
		static void NewProp_bCustomFlag3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag2_MetaData[];
#endif
		static void NewProp_bCustomFlag2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag1_MetaData[];
#endif
		static void NewProp_bCustomFlag1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag0_MetaData[];
#endif
		static void NewProp_bCustomFlag0_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToCheapestArea_MetaData[];
#endif
		static void NewProp_bSnapToCheapestArea_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToCheapestArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSnapHeight_MetaData[];
#endif
		static void NewProp_bUseSnapHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSnapHeight;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent15_MetaData[];
#endif
		static void NewProp_bSupportsAgent15_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent15;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent14_MetaData[];
#endif
		static void NewProp_bSupportsAgent14_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent14;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent13_MetaData[];
#endif
		static void NewProp_bSupportsAgent13_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent13;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent12_MetaData[];
#endif
		static void NewProp_bSupportsAgent12_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent12;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent11_MetaData[];
#endif
		static void NewProp_bSupportsAgent11_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent11;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent10_MetaData[];
#endif
		static void NewProp_bSupportsAgent10_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent9_MetaData[];
#endif
		static void NewProp_bSupportsAgent9_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent9;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent8_MetaData[];
#endif
		static void NewProp_bSupportsAgent8_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent7_MetaData[];
#endif
		static void NewProp_bSupportsAgent7_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent6_MetaData[];
#endif
		static void NewProp_bSupportsAgent6_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent5_MetaData[];
#endif
		static void NewProp_bSupportsAgent5_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent4_MetaData[];
#endif
		static void NewProp_bSupportsAgent4_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent3_MetaData[];
#endif
		static void NewProp_bSupportsAgent3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent2_MetaData[];
#endif
		static void NewProp_bSupportsAgent2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent1_MetaData[];
#endif
		static void NewProp_bSupportsAgent1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent0_MetaData[];
#endif
		static void NewProp_bSupportsAgent0_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedAgents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFallDownLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFallDownLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftProjectHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftProjectHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationLinkBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_AreaClass_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "Area type of this link (empty = default)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationLinkBase, AreaClass), Z_Construct_UClass_UNavAreaBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_AreaClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_AreaClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag7 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7 = { "bCustomFlag7", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag6 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6 = { "bCustomFlag6", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag5 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5 = { "bCustomFlag5", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag4 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4 = { "bCustomFlag4", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3 = { "bCustomFlag3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2 = { "bCustomFlag2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1 = { "bCustomFlag1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag0 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0 = { "bCustomFlag0", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "If set, link will try to snap to cheapest area in given radius" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSnapToCheapestArea = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea = { "bSnapToCheapestArea", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight_MetaData[] = {
		{ "Category", "Default" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "WITH_EDITORONLY_DATA" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bUseSnapHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight = { "bUseSnapHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "this is an editor-only property to put descriptions in navlinks setup, to be able to identify it easier" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationLinkBase, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Description_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent15 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15 = { "bSupportsAgent15", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent14 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14 = { "bSupportsAgent14", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent13 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13 = { "bSupportsAgent13", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent12 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12 = { "bSupportsAgent12", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent11 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11 = { "bSupportsAgent11", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent10 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10 = { "bSupportsAgent10", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent9 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9 = { "bSupportsAgent9", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent8 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8 = { "bSupportsAgent8", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent7 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7 = { "bSupportsAgent7", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent6 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6 = { "bSupportsAgent6", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent5 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5 = { "bSupportsAgent5", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent4 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4 = { "bSupportsAgent4", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3 = { "bSupportsAgent3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2 = { "bSupportsAgent2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1 = { "bSupportsAgent1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "DEPRECATED AGENT CONFIG" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent0 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0 = { "bSupportsAgent0", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SupportedAgents_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "restrict area only to specified agents" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SupportedAgents = { "SupportedAgents", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationLinkBase, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SupportedAgents_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SupportedAgents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapHeight_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bUseSnapHeight" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapHeight = { "SnapHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationLinkBase, SnapHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapHeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapRadius_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapRadius = { "SnapRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationLinkBase, SnapRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationLinkBase, Direction), Z_Construct_UEnum_Engine_ENavLinkDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_MaxFallDownLength_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Right Project Height" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "if greater than 0 nav system will attempt to project navlink's end point on geometry below" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_MaxFallDownLength = { "MaxFallDownLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationLinkBase, MaxFallDownLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_MaxFallDownLength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_MaxFallDownLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_LeftProjectHeight_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "if greater than 0 nav system will attempt to project navlink's start point on geometry below" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_LeftProjectHeight = { "LeftProjectHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavigationLinkBase, LeftProjectHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_LeftProjectHeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_LeftProjectHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_AreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SupportedAgents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_MaxFallDownLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_LeftProjectHeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NavigationLinkBase",
		sizeof(FNavigationLinkBase),
		alignof(FNavigationLinkBase),
		Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationLinkBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationLinkBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationLinkBase"), sizeof(FNavigationLinkBase), Get_Z_Construct_UScriptStruct_FNavigationLinkBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationLinkBase_Hash() { return 3992848620U; }
	void UNavLinkDefinition::StaticRegisterNativesUNavLinkDefinition()
	{
	}
	UClass* Z_Construct_UClass_UNavLinkDefinition_NoRegister()
	{
		return UNavLinkDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UNavLinkDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentLinks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Links;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavLinkDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/Navigation/NavLinkDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "Class containing definition of a navigation area" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks_MetaData[] = {
		{ "Category", "OffMeshLinks" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks = { "SegmentLinks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkDefinition, SegmentLinks), METADATA_PARAMS(Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks_Inner = { "SegmentLinks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNavigationSegmentLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links_MetaData[] = {
		{ "Category", "OffMeshLinks" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavLinkDefinition, Links), METADATA_PARAMS(Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavLinkDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavLinkDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLinkDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkDefinition_Statics::ClassParams = {
		&UNavLinkDefinition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavLinkDefinition_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNavLinkDefinition_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNavLinkDefinition_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavLinkDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavLinkDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavLinkDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavLinkDefinition, 2910911513);
	template<> ENGINE_API UClass* StaticClass<UNavLinkDefinition>()
	{
		return UNavLinkDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLinkDefinition(Z_Construct_UClass_UNavLinkDefinition, &UNavLinkDefinition::StaticClass, TEXT("/Script/Engine"), TEXT("UNavLinkDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
