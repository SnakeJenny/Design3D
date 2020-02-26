// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Slate/WidgetTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetTransform() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetTransform();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FWidgetTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FWidgetTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetTransform, Z_Construct_UPackage__Script_UMG(), TEXT("WidgetTransform"), sizeof(FWidgetTransform), Get_Z_Construct_UScriptStruct_FWidgetTransform_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FWidgetTransform>()
{
	return FWidgetTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetTransform(FWidgetTransform::StaticStruct, TEXT("/Script/UMG"), TEXT("WidgetTransform"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFWidgetTransform
{
	FScriptStruct_UMG_StaticRegisterNativesFWidgetTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetTransform")),new UScriptStruct::TCppStructOps<FWidgetTransform>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFWidgetTransform;
	struct Z_Construct_UScriptStruct_FWidgetTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shear_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
		{ "ToolTip", "Describes the standard transformation of a widget" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Transform" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
		{ "ToolTip", "The angle in degrees to rotate" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetTransform, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Angle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Shear_MetaData[] = {
		{ "Category", "Transform" },
		{ "ClampMax", "89" },
		{ "ClampMin", "-89" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
		{ "ToolTip", "The amount to shear the widget in slate units" },
		{ "UIMax", "89" },
		{ "UIMin", "-89" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Shear = { "Shear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetTransform, Shear), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Shear_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Shear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Transform" },
		{ "Delta", "0.05" },
		{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
		{ "ToolTip", "The scale to apply to the widget" },
		{ "UIMax", "5" },
		{ "UIMin", "-5" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetTransform, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Transform" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Public/Slate/WidgetTransform.h" },
		{ "ToolTip", "The amount to translate the widget in slate units" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetTransform, Translation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Translation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Translation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Shear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTransform_Statics::NewProp_Translation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"WidgetTransform",
		sizeof(FWidgetTransform),
		alignof(FWidgetTransform),
		Z_Construct_UScriptStruct_FWidgetTransform_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTransform_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetTransform"), sizeof(FWidgetTransform), Get_Z_Construct_UScriptStruct_FWidgetTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetTransform_Hash() { return 4123405649U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
