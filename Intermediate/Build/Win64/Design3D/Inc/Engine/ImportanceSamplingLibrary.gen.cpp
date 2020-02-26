// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/ImportanceSamplingLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportanceSamplingLibrary() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EImportanceWeight();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FImportanceTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UImportanceSamplingLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D();
	ENGINE_API UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat();
// End Cross Module References
	static UEnum* EImportanceWeight_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EImportanceWeight, Z_Construct_UPackage__Script_Engine(), TEXT("EImportanceWeight"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EImportanceWeight::Type>()
	{
		return EImportanceWeight_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImportanceWeight(EImportanceWeight_StaticEnum, TEXT("/Script/Engine"), TEXT("EImportanceWeight"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EImportanceWeight_Hash() { return 3025761109U; }
	UEnum* Z_Construct_UEnum_Engine_EImportanceWeight()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImportanceWeight"), 0, Get_Z_Construct_UEnum_Engine_EImportanceWeight_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EImportanceWeight::Luminance", (int64)EImportanceWeight::Luminance },
				{ "EImportanceWeight::Red", (int64)EImportanceWeight::Red },
				{ "EImportanceWeight::Green", (int64)EImportanceWeight::Green },
				{ "EImportanceWeight::Blue", (int64)EImportanceWeight::Blue },
				{ "EImportanceWeight::Alpha", (int64)EImportanceWeight::Alpha },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alpha.ToolTip", "Importance from alpha channel of texture." },
				{ "Blue.ToolTip", "Importance from blue channel of texture." },
				{ "BlueprintType", "true" },
				{ "Green.ToolTip", "Importance from green channel of texture." },
				{ "Luminance.ToolTip", "Importance from color luminance." },
				{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
				{ "Red.ToolTip", "Importance from red channel of texture." },
				{ "ToolTip", "Provides different weighting functions for texture importance sampling" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EImportanceWeight",
				"EImportanceWeight::Type",
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
class UScriptStruct* FImportanceTexture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FImportanceTexture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportanceTexture, Z_Construct_UPackage__Script_Engine(), TEXT("ImportanceTexture"), sizeof(FImportanceTexture), Get_Z_Construct_UScriptStruct_FImportanceTexture_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FImportanceTexture>()
{
	return FImportanceTexture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImportanceTexture(FImportanceTexture::StaticStruct, TEXT("/Script/Engine"), TEXT("ImportanceTexture"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFImportanceTexture
{
	FScriptStruct_Engine_StaticRegisterNativesFImportanceTexture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImportanceTexture")),new UScriptStruct::TCppStructOps<FImportanceTexture>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFImportanceTexture;
	struct Z_Construct_UScriptStruct_FImportanceTexture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weighting_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionalCDF_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConditionalCDF;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConditionalCDF_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarginalCDF_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MarginalCDF;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarginalCDF_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumMips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "Engine.ImportanceSamplingLibrary.BreakImportanceTexture" },
		{ "HasNativeMake", "Engine.ImportanceSamplingLibrary.MakeImportanceTexture" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Texture processed for importance sampling\nHolds marginal PDF of the rows, as well as the PDF of each row" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportanceTexture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Weighting_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Original importance weight for Break function" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Weighting = { "Weighting", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportanceTexture, Weighting), Z_Construct_UEnum_Engine_EImportanceWeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Weighting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Weighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Original texture object for Break function" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportanceTexture, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "packed copy of MIP level data for filtered sampling (capped to 1024x1024)\nlocal copy seems better than allocating and copying the same data temporarily for each sample" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData = { "TextureData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportanceTexture, TextureData), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData_Inner = { "TextureData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Unnormalized cumulative probability of each pixel in a row (Size.Y row CDFs of Size.X+1)\nFirst entry of each row is zero, final entry in each row is the CDF normalization factor for that row" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF = { "ConditionalCDF", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportanceTexture, ConditionalCDF), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF_Inner = { "ConditionalCDF", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Unnormalized cumulative density of the image by rows (Size.Y+1)\nFirst entry is zero, final entry is the CDF normalization factor" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF = { "MarginalCDF", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportanceTexture, MarginalCDF), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF_Inner = { "MarginalCDF", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_NumMips_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "active number of MIP levels" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_NumMips = { "NumMips", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportanceTexture, NumMips), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_NumMips_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_NumMips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "active texture dimensions, capped to 1024 x 1024" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportanceTexture, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportanceTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Weighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_TextureData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_ConditionalCDF_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_MarginalCDF_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_NumMips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportanceTexture_Statics::NewProp_Size,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportanceTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ImportanceTexture",
		sizeof(FImportanceTexture),
		alignof(FImportanceTexture),
		Z_Construct_UScriptStruct_FImportanceTexture_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportanceTexture_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportanceTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportanceTexture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImportanceTexture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImportanceTexture"), sizeof(FImportanceTexture), Get_Z_Construct_UScriptStruct_FImportanceTexture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImportanceTexture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImportanceTexture_Hash() { return 959095926U; }
	void UImportanceSamplingLibrary::StaticRegisterNativesUImportanceSamplingLibrary()
	{
		UClass* Class = UImportanceSamplingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakImportanceTexture", &UImportanceSamplingLibrary::execBreakImportanceTexture },
			{ "ImportanceSample", &UImportanceSamplingLibrary::execImportanceSample },
			{ "MakeImportanceTexture", &UImportanceSamplingLibrary::execMakeImportanceTexture },
			{ "NextSobolCell2D", &UImportanceSamplingLibrary::execNextSobolCell2D },
			{ "NextSobolCell3D", &UImportanceSamplingLibrary::execNextSobolCell3D },
			{ "NextSobolFloat", &UImportanceSamplingLibrary::execNextSobolFloat },
			{ "RandomSobolCell2D", &UImportanceSamplingLibrary::execRandomSobolCell2D },
			{ "RandomSobolCell3D", &UImportanceSamplingLibrary::execRandomSobolCell3D },
			{ "RandomSobolFloat", &UImportanceSamplingLibrary::execRandomSobolFloat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics
	{
		struct ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms
		{
			FImportanceTexture ImportanceTexture;
			UTexture2D* Texture;
			TEnumAsByte<EImportanceWeight::Type> WeightingFunc;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeightingFunc;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportanceTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportanceTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_WeightingFunc = { "WeightingFunc", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms, WeightingFunc), Z_Construct_UEnum_Engine_EImportanceWeight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_ImportanceTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_ImportanceTexture = { "ImportanceTexture", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms, ImportanceTexture), Z_Construct_UScriptStruct_FImportanceTexture, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_ImportanceTexture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_ImportanceTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_WeightingFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::NewProp_ImportanceTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Get texture used to create an ImportanceTexture object\n@param ImportanceTexture - The source ImportanceTexture object\n@outparam Texture - Texture object for this ImportanceTexture.\n@param WeightingFunc - How to turn the texture data into probability weights\n@return new ImportanceTexture object for use with ImportanceSample" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "BreakImportanceTexture", sizeof(ImportanceSamplingLibrary_eventBreakImportanceTexture_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics
	{
		struct ImportanceSamplingLibrary_eventImportanceSample_Parms
		{
			FImportanceTexture Texture;
			FVector2D Rand;
			int32 Samples;
			float Intensity;
			FVector2D SamplePosition;
			FLinearColor SampleColor;
			float SampleIntensity;
			float SampleSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SampleSize;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SampleIntensity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampleColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SamplePosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Samples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleSize = { "SampleSize", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SampleSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleIntensity = { "SampleIntensity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SampleIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleColor = { "SampleColor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SampleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SamplePosition = { "SamplePosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, SamplePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Samples), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Rand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Rand = { "Rand", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Rand), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Rand_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Rand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventImportanceSample_Parms, Texture), Z_Construct_UScriptStruct_FImportanceTexture, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SampleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_SamplePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Samples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Rand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "Distribute sample points proportional to Texture2D luminance.\n@param Rand - Random 2D point with components evenly distributed between 0 and 1\n@param Samples - Total number of samples that will be used\n@param Intensity - Total intensity for light\n@outparam SamplePosition - Importance sampled 2D output texture coordinate (0-1)\n@outparam SampleColor - Representative color near Position from MIP level for SampleSize\n@outparam SampleIntensity - Intensity of individual points, scaled by probability and number of samples\n@outparam SampleSize - Local density of points near Position (scaled for 1x1 texture space)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "ImportanceSample", sizeof(ImportanceSamplingLibrary_eventImportanceSample_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics
	{
		struct ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms
		{
			UTexture2D* Texture;
			TEnumAsByte<EImportanceWeight::Type> WeightingFunc;
			FImportanceTexture ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeightingFunc;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FImportanceTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_WeightingFunc = { "WeightingFunc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms, WeightingFunc), Z_Construct_UEnum_Engine_EImportanceWeight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_WeightingFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Create an FImportanceTexture object for texture-driven importance sampling from a 2D RGBA8 texture\n@param Texture - Texture object to use. Must be RGBA8 format.\n@param WeightingFunc - How to turn the texture data into probability weights\n@return new ImportanceTexture object for use with ImportanceSample" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "MakeImportanceTexture", sizeof(ImportanceSamplingLibrary_eventMakeImportanceTexture_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics
	{
		struct ImportanceSamplingLibrary_eventNextSobolCell2D_Parms
		{
			int32 Index;
			int32 NumCells;
			FVector2D PreviousValue;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCells;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, PreviousValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, NumCells), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_PreviousValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_NumCells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "CPP_Default_NumCells", "1" },
		{ "CPP_Default_PreviousValue", "(X=0.000,Y=0.000)" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point\n@param NumCells - Size of cell grid, 1 to 32768. Rounded up to the next power of two\n@param PreviousValue - The Sobol value for Index-1\n@return Sobol-distributed random 2D position in the same grid cell" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "NextSobolCell2D", sizeof(ImportanceSamplingLibrary_eventNextSobolCell2D_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics
	{
		struct ImportanceSamplingLibrary_eventNextSobolCell3D_Parms
		{
			int32 Index;
			int32 NumCells;
			FVector PreviousValue;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCells;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, PreviousValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, NumCells), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_PreviousValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_NumCells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "CPP_Default_NumCells", "1" },
		{ "CPP_Default_PreviousValue", "0.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point\n@param NumCells - Size of cell grid, 1 to 1024. Rounded up to the next power of two\n@param PreviousValue - The Sobol value for Index-1\n@return Sobol-distributed random 3D position in the same grid cell" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "NextSobolCell3D", sizeof(ImportanceSamplingLibrary_eventNextSobolCell3D_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics
	{
		struct ImportanceSamplingLibrary_eventNextSobolFloat_Parms
		{
			int32 Index;
			int32 Dimension;
			float PreviousValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Dimension;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, PreviousValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, Dimension), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventNextSobolFloat_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_PreviousValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_Dimension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point\n@param Dimension - Which Sobol dimension (0 to 15)\n@param PreviousValue - The Sobol value for Index-1\n@return Sobol-distributed random number between 0 and 1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "NextSobolFloat", sizeof(ImportanceSamplingLibrary_eventNextSobolFloat_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics
	{
		struct ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms
		{
			int32 Index;
			int32 NumCells;
			FVector2D Cell;
			FVector2D Seed;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cell;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCells;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, Seed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, Cell), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, NumCells), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Cell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_NumCells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "CPP_Default_Cell", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_NumCells", "1" },
		{ "CPP_Default_Seed", "(X=0.000,Y=0.000)" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point in the cell (starting at 0)\n@param NumCells - Size of cell grid, 1 to 32768. Rounded up to the next power of two\n@param Cell - Give a point from this integer grid cell\n@param Seed - Random 2D seed (components in the range 0-1) to randomize across multiple sequences\n@return Sobol-distributed random 2D position in the given grid cell" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "RandomSobolCell2D", sizeof(ImportanceSamplingLibrary_eventRandomSobolCell2D_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics
	{
		struct ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms
		{
			int32 Index;
			int32 NumCells;
			FVector Cell;
			FVector Seed;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cell;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCells;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, Seed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, Cell), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, NumCells), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Cell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_NumCells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "CPP_Default_Cell", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_NumCells", "1" },
		{ "CPP_Default_Seed", "0.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point in the cell (starting at 0)\n@param NumCells - Size of cell grid, 1 to 1024. Rounded up to the next power of two\n@param Cell - Give a point from this integer grid cell\n@param Seed - Random 3D seed (components in the range 0-1) to randomize across multiple sequences\n@return Sobol-distributed random 3D vector in the given grid cell" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "RandomSobolCell3D", sizeof(ImportanceSamplingLibrary_eventRandomSobolCell3D_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics
	{
		struct ImportanceSamplingLibrary_eventRandomSobolFloat_Parms
		{
			int32 Index;
			int32 Dimension;
			float Seed;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Dimension;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, Dimension), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Dimension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
		{ "ToolTip", "@param Index - Which sequential point\n@param Dimension - Which Sobol dimension (0 to 15)\n@param Seed - Random seed (in the range 0-1) to randomize across multiple sequences\n@return Sobol-distributed random number between 0 and 1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportanceSamplingLibrary, nullptr, "RandomSobolFloat", sizeof(ImportanceSamplingLibrary_eventRandomSobolFloat_Parms), Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImportanceSamplingLibrary_NoRegister()
	{
		return UImportanceSamplingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UImportanceSamplingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportanceSamplingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImportanceSamplingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_BreakImportanceTexture, "BreakImportanceTexture" }, // 4250752786
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_ImportanceSample, "ImportanceSample" }, // 1956001330
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_MakeImportanceTexture, "MakeImportanceTexture" }, // 3697581971
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell2D, "NextSobolCell2D" }, // 2258556977
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolCell3D, "NextSobolCell3D" }, // 69776287
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_NextSobolFloat, "NextSobolFloat" }, // 98693084
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell2D, "RandomSobolCell2D" }, // 1717121941
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolCell3D, "RandomSobolCell3D" }, // 3246135822
		{ &Z_Construct_UFunction_UImportanceSamplingLibrary_RandomSobolFloat, "RandomSobolFloat" }, // 2579185688
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportanceSamplingLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/ImportanceSamplingLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/ImportanceSamplingLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportanceSamplingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportanceSamplingLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImportanceSamplingLibrary_Statics::ClassParams = {
		&UImportanceSamplingLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImportanceSamplingLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UImportanceSamplingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportanceSamplingLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImportanceSamplingLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImportanceSamplingLibrary, 2053085752);
	template<> ENGINE_API UClass* StaticClass<UImportanceSamplingLibrary>()
	{
		return UImportanceSamplingLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImportanceSamplingLibrary(Z_Construct_UClass_UImportanceSamplingLibrary, &UImportanceSamplingLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UImportanceSamplingLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportanceSamplingLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
