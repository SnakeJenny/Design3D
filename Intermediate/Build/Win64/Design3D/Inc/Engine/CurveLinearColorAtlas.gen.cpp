// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/CurveLinearColorAtlas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveLinearColorAtlas() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
// End Cross Module References
	void UCurveLinearColorAtlas::StaticRegisterNativesUCurveLinearColorAtlas()
	{
		UClass* Class = UCurveLinearColorAtlas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurvePosition", &UCurveLinearColorAtlas::execGetCurvePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics
	{
		struct CurveLinearColorAtlas_eventGetCurvePosition_Parms
		{
			UCurveLinearColor* InCurve;
			float Position;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CurveLinearColorAtlas_eventGetCurvePosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CurveLinearColorAtlas_eventGetCurvePosition_Parms), &Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveLinearColorAtlas_eventGetCurvePosition_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_InCurve = { "InCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveLinearColorAtlas_eventGetCurvePosition_Parms, InCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_InCurve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColorAtlas, nullptr, "GetCurvePosition", sizeof(CurveLinearColorAtlas_eventGetCurvePosition_Parms), Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister()
	{
		return UCurveLinearColorAtlas::StaticClass();
	}
	struct Z_Construct_UClass_UCurveLinearColorAtlas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GradientCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GradientCurves;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GradientCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GradientPixelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_GradientPixelSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TextureSize;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[];
#endif
		static void NewProp_bIsDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveLinearColorAtlas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveLinearColorAtlas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition, "GetCurvePosition" }, // 770375189
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Curves/CurveLinearColorAtlas.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Manages gradient LUT textures for registered actors and assigns them to the corresponding materials on the actor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_MetaData[] = {
		{ "Category", "Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "How many pixels tall is any gradient slot" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves = { "GradientCurves", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColorAtlas, GradientCurves), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_Inner = { "GradientCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientPixelSize_MetaData[] = {
		{ "Category", "Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Size of the lookup textures" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientPixelSize = { "GradientPixelSize", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColorAtlas, GradientPixelSize), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientPixelSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientPixelSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColorAtlas, TextureSize), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_SetBit(void* Obj)
	{
		((UCurveLinearColorAtlas*)Obj)->bIsDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientPixelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveLinearColorAtlas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveLinearColorAtlas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::ClassParams = {
		&UCurveLinearColorAtlas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveLinearColorAtlas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveLinearColorAtlas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveLinearColorAtlas, 2765942223);
	template<> ENGINE_API UClass* StaticClass<UCurveLinearColorAtlas>()
	{
		return UCurveLinearColorAtlas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveLinearColorAtlas(Z_Construct_UClass_UCurveLinearColorAtlas, &UCurveLinearColorAtlas::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveLinearColorAtlas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColorAtlas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
