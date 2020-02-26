// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialEditor/MaterialEditorInstanceConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditorInstanceConstant() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FComponentMaskParameter();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorFontParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorTextureParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorScalarParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorVectorParameterValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorParameterGroup();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialParameterAssociation();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorInstanceConstant_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorInstanceConstant();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides();
	ENGINE_API UClass* Z_Construct_UClass_USubsurfaceProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
class UScriptStruct* FEditorStaticComponentMaskParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorStaticComponentMaskParameterValue"), sizeof(FEditorStaticComponentMaskParameterValue), Get_Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorStaticComponentMaskParameterValue>()
{
	return FEditorStaticComponentMaskParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorStaticComponentMaskParameterValue(FEditorStaticComponentMaskParameterValue::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorStaticComponentMaskParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorStaticComponentMaskParameterValue
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorStaticComponentMaskParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorStaticComponentMaskParameterValue")),new UScriptStruct::TCppStructOps<FEditorStaticComponentMaskParameterValue>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorStaticComponentMaskParameterValue;
	struct Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorStaticComponentMaskParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "EditorStaticComponentMaskParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorStaticComponentMaskParameterValue, ParameterValue), Z_Construct_UScriptStruct_FComponentMaskParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorStaticComponentMaskParameterValue",
		sizeof(FEditorStaticComponentMaskParameterValue),
		alignof(FEditorStaticComponentMaskParameterValue),
		Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorStaticComponentMaskParameterValue"), sizeof(FEditorStaticComponentMaskParameterValue), Get_Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorStaticComponentMaskParameterValue_Hash() { return 3177397466U; }
class UScriptStruct* FComponentMaskParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FComponentMaskParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentMaskParameter, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ComponentMaskParameter"), sizeof(FComponentMaskParameter), Get_Z_Construct_UScriptStruct_FComponentMaskParameter_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FComponentMaskParameter>()
{
	return FComponentMaskParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentMaskParameter(FComponentMaskParameter::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("ComponentMaskParameter"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFComponentMaskParameter
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFComponentMaskParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentMaskParameter")),new UScriptStruct::TCppStructOps<FComponentMaskParameter>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFComponentMaskParameter;
	struct Z_Construct_UScriptStruct_FComponentMaskParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static void NewProp_G_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_G;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static void NewProp_R_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_R;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentMaskParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A_MetaData[] = {
		{ "Category", "ComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FComponentMaskParameter*)Obj)->A = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FComponentMaskParameter), &Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B_MetaData[] = {
		{ "Category", "ComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FComponentMaskParameter*)Obj)->B = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FComponentMaskParameter), &Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G_MetaData[] = {
		{ "Category", "ComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G_SetBit(void* Obj)
	{
		((FComponentMaskParameter*)Obj)->G = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FComponentMaskParameter), &Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R_MetaData[] = {
		{ "Category", "ComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R_SetBit(void* Obj)
	{
		((FComponentMaskParameter*)Obj)->R = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FComponentMaskParameter), &Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_G,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::NewProp_R,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ComponentMaskParameter",
		sizeof(FComponentMaskParameter),
		alignof(FComponentMaskParameter),
		Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentMaskParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentMaskParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentMaskParameter"), sizeof(FComponentMaskParameter), Get_Z_Construct_UScriptStruct_FComponentMaskParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentMaskParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentMaskParameter_Hash() { return 206450692U; }
class UScriptStruct* FEditorStaticSwitchParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorStaticSwitchParameterValue"), sizeof(FEditorStaticSwitchParameterValue), Get_Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorStaticSwitchParameterValue>()
{
	return FEditorStaticSwitchParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorStaticSwitchParameterValue(FEditorStaticSwitchParameterValue::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorStaticSwitchParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorStaticSwitchParameterValue
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorStaticSwitchParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorStaticSwitchParameterValue")),new UScriptStruct::TCppStructOps<FEditorStaticSwitchParameterValue>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorStaticSwitchParameterValue;
	struct Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static void NewProp_ParameterValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorStaticSwitchParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "EditorStaticSwitchParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_SetBit(void* Obj)
	{
		((FEditorStaticSwitchParameterValue*)Obj)->ParameterValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEditorStaticSwitchParameterValue), &Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorStaticSwitchParameterValue",
		sizeof(FEditorStaticSwitchParameterValue),
		alignof(FEditorStaticSwitchParameterValue),
		Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorStaticSwitchParameterValue"), sizeof(FEditorStaticSwitchParameterValue), Get_Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorStaticSwitchParameterValue_Hash() { return 1262820239U; }
class UScriptStruct* FEditorMaterialLayersParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorMaterialLayersParameterValue"), sizeof(FEditorMaterialLayersParameterValue), Get_Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorMaterialLayersParameterValue>()
{
	return FEditorMaterialLayersParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorMaterialLayersParameterValue(FEditorMaterialLayersParameterValue::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorMaterialLayersParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorMaterialLayersParameterValue
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorMaterialLayersParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorMaterialLayersParameterValue")),new UScriptStruct::TCppStructOps<FEditorMaterialLayersParameterValue>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorMaterialLayersParameterValue;
	struct Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorMaterialLayersParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewProp_FunctionValue_MetaData[] = {
		{ "Category", "EditorLayersParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewProp_FunctionValue = { "FunctionValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorMaterialLayersParameterValue, FunctionValue), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewProp_FunctionValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewProp_FunctionValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::NewProp_FunctionValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorMaterialLayersParameterValue",
		sizeof(FEditorMaterialLayersParameterValue),
		alignof(FEditorMaterialLayersParameterValue),
		Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorMaterialLayersParameterValue"), sizeof(FEditorMaterialLayersParameterValue), Get_Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorMaterialLayersParameterValue_Hash() { return 769396074U; }
class UScriptStruct* FEditorFontParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorFontParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorFontParameterValue, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorFontParameterValue"), sizeof(FEditorFontParameterValue), Get_Z_Construct_UScriptStruct_FEditorFontParameterValue_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorFontParameterValue>()
{
	return FEditorFontParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorFontParameterValue(FEditorFontParameterValue::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorFontParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorFontParameterValue
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorFontParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorFontParameterValue")),new UScriptStruct::TCppStructOps<FEditorFontParameterValue>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorFontParameterValue;
	struct Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorFontParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontPage_MetaData[] = {
		{ "Category", "EditorFontParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontPage = { "FontPage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorFontParameterValue, FontPage), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontPage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontValue_MetaData[] = {
		{ "Category", "EditorFontParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontValue = { "FontValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorFontParameterValue, FontValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::NewProp_FontValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorFontParameterValue",
		sizeof(FEditorFontParameterValue),
		alignof(FEditorFontParameterValue),
		Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorFontParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorFontParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorFontParameterValue"), sizeof(FEditorFontParameterValue), Get_Z_Construct_UScriptStruct_FEditorFontParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorFontParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorFontParameterValue_Hash() { return 1860462657U; }
class UScriptStruct* FEditorTextureParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorTextureParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorTextureParameterValue, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorTextureParameterValue"), sizeof(FEditorTextureParameterValue), Get_Z_Construct_UScriptStruct_FEditorTextureParameterValue_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorTextureParameterValue>()
{
	return FEditorTextureParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorTextureParameterValue(FEditorTextureParameterValue::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorTextureParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorTextureParameterValue
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorTextureParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorTextureParameterValue")),new UScriptStruct::TCppStructOps<FEditorTextureParameterValue>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorTextureParameterValue;
	struct Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorTextureParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "EditorTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorTextureParameterValue, ParameterValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::NewProp_ParameterValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorTextureParameterValue",
		sizeof(FEditorTextureParameterValue),
		alignof(FEditorTextureParameterValue),
		Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorTextureParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorTextureParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorTextureParameterValue"), sizeof(FEditorTextureParameterValue), Get_Z_Construct_UScriptStruct_FEditorTextureParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorTextureParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorTextureParameterValue_Hash() { return 1643937365U; }
class UScriptStruct* FEditorScalarParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorScalarParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorScalarParameterValue, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorScalarParameterValue"), sizeof(FEditorScalarParameterValue), Get_Z_Construct_UScriptStruct_FEditorScalarParameterValue_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorScalarParameterValue>()
{
	return FEditorScalarParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorScalarParameterValue(FEditorScalarParameterValue::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorScalarParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorScalarParameterValue
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorScalarParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorScalarParameterValue")),new UScriptStruct::TCppStructOps<FEditorScalarParameterValue>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorScalarParameterValue;
	struct Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorScalarParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "EditorScalarParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorScalarParameterValue, ParameterValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::NewProp_ParameterValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorScalarParameterValue",
		sizeof(FEditorScalarParameterValue),
		alignof(FEditorScalarParameterValue),
		Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorScalarParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorScalarParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorScalarParameterValue"), sizeof(FEditorScalarParameterValue), Get_Z_Construct_UScriptStruct_FEditorScalarParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorScalarParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorScalarParameterValue_Hash() { return 117700599U; }
class UScriptStruct* FEditorVectorParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorVectorParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorVectorParameterValue, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorVectorParameterValue"), sizeof(FEditorVectorParameterValue), Get_Z_Construct_UScriptStruct_FEditorVectorParameterValue_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorVectorParameterValue>()
{
	return FEditorVectorParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorVectorParameterValue(FEditorVectorParameterValue::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorVectorParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorVectorParameterValue
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorVectorParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorVectorParameterValue")),new UScriptStruct::TCppStructOps<FEditorVectorParameterValue>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorVectorParameterValue;
	struct Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorVectorParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "EditorVectorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorVectorParameterValue, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::NewProp_ParameterValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FEditorParameterValue,
		&NewStructOps,
		"EditorVectorParameterValue",
		sizeof(FEditorVectorParameterValue),
		alignof(FEditorVectorParameterValue),
		Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorVectorParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorVectorParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorVectorParameterValue"), sizeof(FEditorVectorParameterValue), Get_Z_Construct_UScriptStruct_FEditorVectorParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorVectorParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorVectorParameterValue_Hash() { return 4240815113U; }
class UScriptStruct* FEditorParameterValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorParameterValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorParameterValue, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorParameterValue"), sizeof(FEditorParameterValue), Get_Z_Construct_UScriptStruct_FEditorParameterValue_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorParameterValue>()
{
	return FEditorParameterValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorParameterValue(FEditorParameterValue::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorParameterValue"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorParameterValue
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorParameterValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorParameterValue")),new UScriptStruct::TCppStructOps<FEditorParameterValue>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorParameterValue;
	struct Z_Construct_UScriptStruct_FEditorParameterValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorParameterValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ExpressionId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ExpressionId = { "ExpressionId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorParameterValue, ExpressionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ExpressionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ExpressionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "EditorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ParameterInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ParameterInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride_MetaData[] = {
		{ "Category", "EditorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FEditorParameterValue*)Obj)->bOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEditorParameterValue), &Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ExpressionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_ParameterInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterValue_Statics::NewProp_bOverride,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"EditorParameterValue",
		sizeof(FEditorParameterValue),
		alignof(FEditorParameterValue),
		Z_Construct_UScriptStruct_FEditorParameterValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorParameterValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorParameterValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorParameterValue"), sizeof(FEditorParameterValue), Get_Z_Construct_UScriptStruct_FEditorParameterValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorParameterValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorParameterValue_Hash() { return 2580609783U; }
class UScriptStruct* FEditorParameterGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorParameterGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorParameterGroup, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorParameterGroup"), sizeof(FEditorParameterGroup), Get_Z_Construct_UScriptStruct_FEditorParameterGroup_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorParameterGroup>()
{
	return FEditorParameterGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorParameterGroup(FEditorParameterGroup::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorParameterGroup"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorParameterGroup
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorParameterGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorParameterGroup")),new UScriptStruct::TCppStructOps<FEditorParameterGroup>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorParameterGroup;
	struct Z_Construct_UScriptStruct_FEditorParameterGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupSortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupSortPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupAssociation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GroupAssociation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorParameterGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupSortPriority_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupSortPriority = { "GroupSortPriority", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorParameterGroup, GroupSortPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupSortPriority_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupSortPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "EditorParameterGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008000000049, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorParameterGroup, Parameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_Inner_MetaData[] = {
		{ "Category", "EditorParameterGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDEditorParameterValue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_Inner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupAssociation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupAssociation = { "GroupAssociation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorParameterGroup, GroupAssociation), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupAssociation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupAssociation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorParameterGroup, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupSortPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_Parameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupAssociation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::NewProp_GroupName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"EditorParameterGroup",
		sizeof(FEditorParameterGroup),
		alignof(FEditorParameterGroup),
		Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorParameterGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorParameterGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorParameterGroup"), sizeof(FEditorParameterGroup), Get_Z_Construct_UScriptStruct_FEditorParameterGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorParameterGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorParameterGroup_Hash() { return 2055560991U; }
	void UMaterialEditorInstanceConstant::StaticRegisterNativesUMaterialEditorInstanceConstant()
	{
	}
	UClass* Z_Construct_UClass_UMaterialEditorInstanceConstant_NoRegister()
	{
		return UMaterialEditorInstanceConstant::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredBlendPreviews_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StoredBlendPreviews;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoredBlendPreviews_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredLayerPreviews_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StoredLayerPreviews;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoredLayerPreviews_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOldStyleMICEditorGroups_MetaData[];
#endif
		static void NewProp_bUseOldStyleMICEditorGroups_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOldStyleMICEditorGroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleExpressions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisibleExpressions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibleExpressions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePropertyOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePropertyOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFunctionInstanceDirty_MetaData[];
#endif
		static void NewProp_bIsFunctionInstanceDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFunctionInstanceDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFunctionPreviewMaterial_MetaData[];
#endif
		static void NewProp_bIsFunctionPreviewMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFunctionPreviewMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideBaseProperties_MetaData[];
#endif
		static void NewProp_bOverrideBaseProperties_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideBaseProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSubsurfaceProfile_MetaData[];
#endif
		static void NewProp_bOverrideSubsurfaceProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSubsurfaceProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubsurfaceProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefractionDepthBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefractionDepthBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterGroups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews = { "StoredBlendPreviews", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorInstanceConstant, StoredBlendPreviews), METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews_Inner = { "StoredBlendPreviews", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews = { "StoredLayerPreviews", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorInstanceConstant, StoredLayerPreviews), METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews_Inner = { "StoredLayerPreviews", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "Should we use old style typed arrays for unassigned parameters instead of a None group (new style)?" },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups_SetBit(void* Obj)
	{
		((UMaterialEditorInstanceConstant*)Obj)->bUseOldStyleMICEditorGroups = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups = { "bUseOldStyleMICEditorGroups", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialEditorInstanceConstant), &Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "The Lightmass override settings for this object." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorInstanceConstant, LightmassSettings), Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_LightmassSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_LightmassSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions = { "VisibleExpressions", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorInstanceConstant, VisibleExpressions), METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions_Inner = { "VisibleExpressions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceFunction = { "SourceFunction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorInstanceConstant, SourceFunction), Z_Construct_UClass_UMaterialFunctionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceFunction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceInstance = { "SourceInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorInstanceConstant, SourceInstance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_BasePropertyOverrides_MetaData[] = {
		{ "Category", "MaterialOverrides" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_BasePropertyOverrides = { "BasePropertyOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorInstanceConstant, BasePropertyOverrides), Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_BasePropertyOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_BasePropertyOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty_SetBit(void* Obj)
	{
		((UMaterialEditorInstanceConstant*)Obj)->bIsFunctionInstanceDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty = { "bIsFunctionInstanceDirty", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialEditorInstanceConstant), &Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial_SetBit(void* Obj)
	{
		((UMaterialEditorInstanceConstant*)Obj)->bIsFunctionPreviewMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial = { "bIsFunctionPreviewMaterial", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialEditorInstanceConstant), &Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties_SetBit(void* Obj)
	{
		((UMaterialEditorInstanceConstant*)Obj)->bOverrideBaseProperties_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties = { "bOverrideBaseProperties", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialEditorInstanceConstant), &Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "Defines if SubsurfaceProfile from tis instance is used or it uses the parent one." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile_SetBit(void* Obj)
	{
		((UMaterialEditorInstanceConstant*)Obj)->bOverrideSubsurfaceProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile = { "bOverrideSubsurfaceProfile", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialEditorInstanceConstant), &Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SubsurfaceProfile_MetaData[] = {
		{ "Category", "Material" },
		{ "DisplayName", "Subsurface Profile" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "SubsurfaceProfile, for Screen Space Subsurface Scattering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SubsurfaceProfile = { "SubsurfaceProfile", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorInstanceConstant, SubsurfaceProfile), Z_Construct_UClass_USubsurfaceProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SubsurfaceProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SubsurfaceProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_RefractionDepthBias_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "This is the refraction depth bias, larger values offset distortion to prevent closer objects from rendering into the distorted surface at acute viewing angles but increases the disconnect between surface and where the refraction starts." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_RefractionDepthBias = { "RefractionDepthBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorInstanceConstant, RefractionDepthBias), METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_RefractionDepthBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_RefractionDepthBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups = { "ParameterGroups", nullptr, (EPropertyFlags)0x0010008000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorInstanceConstant, ParameterGroups), METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups_Inner = { "ParameterGroups", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditorParameterGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "since the Parent may point across levels and the property editor needs to import this text, it must be marked lazy so it doesn't set itself to NULL in FindImportedObject" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorInstanceConstant, Parent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_Parent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "MaterialEditorInstanceConstant" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorInstanceConstant.h" },
		{ "ToolTip", "Physical material to use for this graphics material. Used for sounds, effects etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorInstanceConstant, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_PhysMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_PhysMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredBlendPreviews_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_StoredLayerPreviews_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bUseOldStyleMICEditorGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_LightmassSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_VisibleExpressions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SourceInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_BasePropertyOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionInstanceDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bIsFunctionPreviewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideBaseProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_bOverrideSubsurfaceProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_SubsurfaceProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_RefractionDepthBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_ParameterGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::NewProp_PhysMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditorInstanceConstant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::ClassParams = {
		&UMaterialEditorInstanceConstant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::PropPointers),
		0,
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditorInstanceConstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialEditorInstanceConstant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialEditorInstanceConstant, 1117537066);
	template<> UNREALED_API UClass* StaticClass<UMaterialEditorInstanceConstant>()
	{
		return UMaterialEditorInstanceConstant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialEditorInstanceConstant(Z_Construct_UClass_UMaterialEditorInstanceConstant, &UMaterialEditorInstanceConstant::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialEditorInstanceConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditorInstanceConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
