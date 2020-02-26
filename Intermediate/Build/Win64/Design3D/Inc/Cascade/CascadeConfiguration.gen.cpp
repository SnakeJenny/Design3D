// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cascade/Classes/CascadeConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCascadeConfiguration() {}
// Cross Module References
	CASCADE_API UScriptStruct* Z_Construct_UScriptStruct_FModuleMenuMapper();
	UPackage* Z_Construct_UPackage__Script_Cascade();
	CASCADE_API UClass* Z_Construct_UClass_UCascadeConfiguration_NoRegister();
	CASCADE_API UClass* Z_Construct_UClass_UCascadeConfiguration();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FModuleMenuMapper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CASCADE_API uint32 Get_Z_Construct_UScriptStruct_FModuleMenuMapper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModuleMenuMapper, Z_Construct_UPackage__Script_Cascade(), TEXT("ModuleMenuMapper"), sizeof(FModuleMenuMapper), Get_Z_Construct_UScriptStruct_FModuleMenuMapper_Hash());
	}
	return Singleton;
}
template<> CASCADE_API UScriptStruct* StaticStruct<FModuleMenuMapper>()
{
	return FModuleMenuMapper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModuleMenuMapper(FModuleMenuMapper::StaticStruct, TEXT("/Script/Cascade"), TEXT("ModuleMenuMapper"), false, nullptr, nullptr);
static struct FScriptStruct_Cascade_StaticRegisterNativesFModuleMenuMapper
{
	FScriptStruct_Cascade_StaticRegisterNativesFModuleMenuMapper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModuleMenuMapper")),new UScriptStruct::TCppStructOps<FModuleMenuMapper>);
	}
} ScriptStruct_Cascade_StaticRegisterNativesFModuleMenuMapper;
	struct Z_Construct_UScriptStruct_FModuleMenuMapper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidObjNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InvalidObjNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InvalidObjNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
		{ "ToolTip", "Module-to-TypeData mapping helper." },
	};
#endif
	void* Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModuleMenuMapper>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames = { "InvalidObjNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModuleMenuMapper, InvalidObjNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames_Inner = { "InvalidObjNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_ObjName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_ObjName = { "ObjName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModuleMenuMapper, ObjName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_ObjName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_ObjName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_InvalidObjNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::NewProp_ObjName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Cascade,
		nullptr,
		&NewStructOps,
		"ModuleMenuMapper",
		sizeof(FModuleMenuMapper),
		alignof(FModuleMenuMapper),
		Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModuleMenuMapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModuleMenuMapper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Cascade();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModuleMenuMapper"), sizeof(FModuleMenuMapper), Get_Z_Construct_UScriptStruct_FModuleMenuMapper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModuleMenuMapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModuleMenuMapper_Hash() { return 1157939695U; }
	void UCascadeConfiguration::StaticRegisterNativesUCascadeConfiguration()
	{
	}
	UClass* Z_Construct_UClass_UCascadeConfiguration_NoRegister()
	{
		return UCascadeConfiguration::StaticClass();
	}
	struct Z_Construct_UClass_UCascadeConfiguration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleMenu_ModuleRejections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModuleMenu_ModuleRejections;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModuleMenu_ModuleRejections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModuleMenu_TypeDataToSpecificModuleRejections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleMenu_TypeDataToBaseModuleRejections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModuleMenu_TypeDataToBaseModuleRejections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModuleMenu_TypeDataToBaseModuleRejections_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCascadeConfiguration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Cascade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCascadeConfiguration_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "CascadeConfiguration.h" },
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections_MetaData[] = {
		{ "Category", "Configure" },
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
		{ "ToolTip", "Modules that Cascade should ignore in the menu system." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections = { "ModuleMenu_ModuleRejections", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCascadeConfiguration, ModuleMenu_ModuleRejections), METADATA_PARAMS(Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections_Inner = { "ModuleMenu_ModuleRejections", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_MetaData[] = {
		{ "Category", "Configure" },
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
		{ "ToolTip", "Module-to-TypeData mappings." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections = { "ModuleMenu_TypeDataToSpecificModuleRejections", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCascadeConfiguration, ModuleMenu_TypeDataToSpecificModuleRejections), METADATA_PARAMS(Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_Inner = { "ModuleMenu_TypeDataToSpecificModuleRejections", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModuleMenuMapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections_MetaData[] = {
		{ "Category", "Configure" },
		{ "ModuleRelativePath", "Classes/CascadeConfiguration.h" },
		{ "ToolTip", "TypeData-to-base module mappings.\nThese will disallow complete 'sub-menus' depending on the TypeData utilized." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections = { "ModuleMenu_TypeDataToBaseModuleRejections", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCascadeConfiguration, ModuleMenu_TypeDataToBaseModuleRejections), METADATA_PARAMS(Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections_Inner = { "ModuleMenu_TypeDataToBaseModuleRejections", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModuleMenuMapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCascadeConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_ModuleRejections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToSpecificModuleRejections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCascadeConfiguration_Statics::NewProp_ModuleMenu_TypeDataToBaseModuleRejections_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCascadeConfiguration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCascadeConfiguration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCascadeConfiguration_Statics::ClassParams = {
		&UCascadeConfiguration::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCascadeConfiguration_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCascadeConfiguration_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCascadeConfiguration_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCascadeConfiguration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCascadeConfiguration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCascadeConfiguration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCascadeConfiguration, 4122463787);
	template<> CASCADE_API UClass* StaticClass<UCascadeConfiguration>()
	{
		return UCascadeConfiguration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCascadeConfiguration(Z_Construct_UClass_UCascadeConfiguration, &UCascadeConfiguration::StaticClass, TEXT("/Script/Cascade"), TEXT("UCascadeConfiguration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCascadeConfiguration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
