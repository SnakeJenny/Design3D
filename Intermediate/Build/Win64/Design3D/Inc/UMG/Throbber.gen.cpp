// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/Throbber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrobber() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UThrobber_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UThrobber();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UThrobber_SetAnimateHorizontally();
	UMG_API UFunction* Z_Construct_UFunction_UThrobber_SetAnimateOpacity();
	UMG_API UFunction* Z_Construct_UFunction_UThrobber_SetAnimateVertically();
	UMG_API UFunction* Z_Construct_UFunction_UThrobber_SetNumberOfPieces();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
// End Cross Module References
	void UThrobber::StaticRegisterNativesUThrobber()
	{
		UClass* Class = UThrobber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAnimateHorizontally", &UThrobber::execSetAnimateHorizontally },
			{ "SetAnimateOpacity", &UThrobber::execSetAnimateOpacity },
			{ "SetAnimateVertically", &UThrobber::execSetAnimateVertically },
			{ "SetNumberOfPieces", &UThrobber::execSetNumberOfPieces },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics
	{
		struct Throbber_eventSetAnimateHorizontally_Parms
		{
			bool bInAnimateHorizontally;
		};
		static void NewProp_bInAnimateHorizontally_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAnimateHorizontally;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::NewProp_bInAnimateHorizontally_SetBit(void* Obj)
	{
		((Throbber_eventSetAnimateHorizontally_Parms*)Obj)->bInAnimateHorizontally = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::NewProp_bInAnimateHorizontally = { "bInAnimateHorizontally", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Throbber_eventSetAnimateHorizontally_Parms), &Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::NewProp_bInAnimateHorizontally_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::NewProp_bInAnimateHorizontally,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Sets whether the pieces animate horizontally." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrobber, nullptr, "SetAnimateHorizontally", sizeof(Throbber_eventSetAnimateHorizontally_Parms), Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThrobber_SetAnimateHorizontally()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThrobber_SetAnimateHorizontally_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics
	{
		struct Throbber_eventSetAnimateOpacity_Parms
		{
			bool bInAnimateOpacity;
		};
		static void NewProp_bInAnimateOpacity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAnimateOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::NewProp_bInAnimateOpacity_SetBit(void* Obj)
	{
		((Throbber_eventSetAnimateOpacity_Parms*)Obj)->bInAnimateOpacity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::NewProp_bInAnimateOpacity = { "bInAnimateOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Throbber_eventSetAnimateOpacity_Parms), &Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::NewProp_bInAnimateOpacity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::NewProp_bInAnimateOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Sets whether the pieces animate their opacity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrobber, nullptr, "SetAnimateOpacity", sizeof(Throbber_eventSetAnimateOpacity_Parms), Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThrobber_SetAnimateOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThrobber_SetAnimateOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics
	{
		struct Throbber_eventSetAnimateVertically_Parms
		{
			bool bInAnimateVertically;
		};
		static void NewProp_bInAnimateVertically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAnimateVertically;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::NewProp_bInAnimateVertically_SetBit(void* Obj)
	{
		((Throbber_eventSetAnimateVertically_Parms*)Obj)->bInAnimateVertically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::NewProp_bInAnimateVertically = { "bInAnimateVertically", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Throbber_eventSetAnimateVertically_Parms), &Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::NewProp_bInAnimateVertically_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::NewProp_bInAnimateVertically,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Sets whether the pieces animate vertically." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrobber, nullptr, "SetAnimateVertically", sizeof(Throbber_eventSetAnimateVertically_Parms), Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThrobber_SetAnimateVertically()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThrobber_SetAnimateVertically_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics
	{
		struct Throbber_eventSetNumberOfPieces_Parms
		{
			int32 InNumberOfPieces;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNumberOfPieces;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::NewProp_InNumberOfPieces = { "InNumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Throbber_eventSetNumberOfPieces_Parms, InNumberOfPieces), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::NewProp_InNumberOfPieces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Sets how many pieces there are" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrobber, nullptr, "SetNumberOfPieces", sizeof(Throbber_eventSetNumberOfPieces_Parms), Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThrobber_SetNumberOfPieces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThrobber_SetNumberOfPieces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UThrobber_NoRegister()
	{
		return UThrobber::StaticClass();
	}
	struct Z_Construct_UClass_UThrobber_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PieceImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PieceImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimateOpacity_MetaData[];
#endif
		static void NewProp_bAnimateOpacity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimateVertically_MetaData[];
#endif
		static void NewProp_bAnimateVertically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateVertically;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimateHorizontally_MetaData[];
#endif
		static void NewProp_bAnimateHorizontally_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateHorizontally;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThrobber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UThrobber_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UThrobber_SetAnimateHorizontally, "SetAnimateHorizontally" }, // 3734664368
		{ &Z_Construct_UFunction_UThrobber_SetAnimateOpacity, "SetAnimateOpacity" }, // 1590239787
		{ &Z_Construct_UFunction_UThrobber_SetAnimateVertically, "SetAnimateVertically" }, // 2095975421
		{ &Z_Construct_UFunction_UThrobber_SetNumberOfPieces, "SetNumberOfPieces" }, // 998508371
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrobber_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/Throbber.h" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "A Throbber widget that shows several zooming circles in a row." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrobber_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThrobber_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThrobber, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UThrobber_Statics::NewProp_Image_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThrobber_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrobber_Statics::NewProp_PieceImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Image to use for each segment of the throbber" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrobber_Statics::NewProp_PieceImage = { "PieceImage", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThrobber, PieceImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThrobber_Statics::NewProp_PieceImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThrobber_Statics::NewProp_PieceImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Should the pieces animate their opacity?" },
	};
#endif
	void Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateOpacity_SetBit(void* Obj)
	{
		((UThrobber*)Obj)->bAnimateOpacity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateOpacity = { "bAnimateOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThrobber), &Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateOpacity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateVertically_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Should the pieces animate vertically?" },
	};
#endif
	void Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateVertically_SetBit(void* Obj)
	{
		((UThrobber*)Obj)->bAnimateVertically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateVertically = { "bAnimateVertically", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThrobber), &Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateVertically_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateVertically_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateVertically_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateHorizontally_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "Should the pieces animate horizontally?" },
	};
#endif
	void Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateHorizontally_SetBit(void* Obj)
	{
		((UThrobber*)Obj)->bAnimateHorizontally = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateHorizontally = { "bAnimateHorizontally", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThrobber), &Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateHorizontally_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateHorizontally_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateHorizontally_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrobber_Statics::NewProp_NumberOfPieces_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Components/Throbber.h" },
		{ "ToolTip", "How many pieces there are" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UThrobber_Statics::NewProp_NumberOfPieces = { "NumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThrobber, NumberOfPieces), METADATA_PARAMS(Z_Construct_UClass_UThrobber_Statics::NewProp_NumberOfPieces_MetaData, ARRAY_COUNT(Z_Construct_UClass_UThrobber_Statics::NewProp_NumberOfPieces_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThrobber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrobber_Statics::NewProp_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrobber_Statics::NewProp_PieceImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateVertically,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrobber_Statics::NewProp_bAnimateHorizontally,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrobber_Statics::NewProp_NumberOfPieces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThrobber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrobber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThrobber_Statics::ClassParams = {
		&UThrobber::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UThrobber_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UThrobber_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UThrobber_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UThrobber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThrobber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThrobber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThrobber, 2973339141);
	template<> UMG_API UClass* StaticClass<UThrobber>()
	{
		return UThrobber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThrobber(Z_Construct_UClass_UThrobber, &UThrobber::StaticClass, TEXT("/Script/UMG"), TEXT("UThrobber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrobber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
