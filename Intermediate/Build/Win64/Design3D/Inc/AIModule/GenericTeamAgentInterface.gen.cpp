// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/GenericTeamAgentInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericTeamAgentInterface() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	static UEnum* ETeamAttitude_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_ETeamAttitude, Z_Construct_UPackage__Script_AIModule(), TEXT("ETeamAttitude"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<ETeamAttitude::Type>()
	{
		return ETeamAttitude_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETeamAttitude(ETeamAttitude_StaticEnum, TEXT("/Script/AIModule"), TEXT("ETeamAttitude"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_ETeamAttitude_Hash() { return 415746390U; }
	UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETeamAttitude"), 0, Get_Z_Construct_UEnum_AIModule_ETeamAttitude_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETeamAttitude::Friendly", (int64)ETeamAttitude::Friendly },
				{ "ETeamAttitude::Neutral", (int64)ETeamAttitude::Neutral },
				{ "ETeamAttitude::Hostile", (int64)ETeamAttitude::Hostile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"ETeamAttitude",
				"ETeamAttitude::Type",
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
class UScriptStruct* FGenericTeamId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FGenericTeamId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenericTeamId, Z_Construct_UPackage__Script_AIModule(), TEXT("GenericTeamId"), sizeof(FGenericTeamId), Get_Z_Construct_UScriptStruct_FGenericTeamId_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FGenericTeamId>()
{
	return FGenericTeamId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGenericTeamId(FGenericTeamId::StaticStruct, TEXT("/Script/AIModule"), TEXT("GenericTeamId"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFGenericTeamId
{
	FScriptStruct_AIModule_StaticRegisterNativesFGenericTeamId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GenericTeamId")),new UScriptStruct::TCppStructOps<FGenericTeamId>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFGenericTeamId;
	struct Z_Construct_UScriptStruct_FGenericTeamId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TeamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericTeamId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenericTeamId>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "TeamID" },
		{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGenericTeamId, TeamID), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewProp_TeamID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewProp_TeamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenericTeamId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewProp_TeamID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenericTeamId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"GenericTeamId",
		sizeof(FGenericTeamId),
		alignof(FGenericTeamId),
		Z_Construct_UScriptStruct_FGenericTeamId_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericTeamId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenericTeamId_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericTeamId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGenericTeamId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GenericTeamId"), sizeof(FGenericTeamId), Get_Z_Construct_UScriptStruct_FGenericTeamId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGenericTeamId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGenericTeamId_Hash() { return 729206897U; }
	void UGenericTeamAgentInterface::StaticRegisterNativesUGenericTeamAgentInterface()
	{
	}
	UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister()
	{
		return UGenericTeamAgentInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGenericTeamAgentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenericTeamAgentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenericTeamAgentInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenericTeamAgentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGenericTeamAgentInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenericTeamAgentInterface_Statics::ClassParams = {
		&UGenericTeamAgentInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGenericTeamAgentInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGenericTeamAgentInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenericTeamAgentInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenericTeamAgentInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenericTeamAgentInterface, 4223735420);
	template<> AIMODULE_API UClass* StaticClass<UGenericTeamAgentInterface>()
	{
		return UGenericTeamAgentInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenericTeamAgentInterface(Z_Construct_UClass_UGenericTeamAgentInterface, &UGenericTeamAgentInterface::StaticClass, TEXT("/Script/AIModule"), TEXT("UGenericTeamAgentInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericTeamAgentInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
