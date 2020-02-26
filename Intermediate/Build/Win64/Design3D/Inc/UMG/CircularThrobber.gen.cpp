// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/CircularThrobber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircularThrobber() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UCircularThrobber_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCircularThrobber();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces();
	UMG_API UFunction* Z_Construct_UFunction_UCircularThrobber_SetPeriod();
	UMG_API UFunction* Z_Construct_UFunction_UCircularThrobber_SetRadius();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
// End Cross Module References
	void UCircularThrobber::StaticRegisterNativesUCircularThrobber()
	{
		UClass* Class = UCircularThrobber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNumberOfPieces", &UCircularThrobber::execSetNumberOfPieces },
			{ "SetPeriod", &UCircularThrobber::execSetPeriod },
			{ "SetRadius", &UCircularThrobber::execSetRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics
	{
		struct CircularThrobber_eventSetNumberOfPieces_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::NewProp_InNumberOfPieces = { "InNumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CircularThrobber_eventSetNumberOfPieces_Parms, InNumberOfPieces), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::NewProp_InNumberOfPieces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "Sets how many pieces there are." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularThrobber, nullptr, "SetNumberOfPieces", sizeof(CircularThrobber_eventSetNumberOfPieces_Parms), Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics
	{
		struct CircularThrobber_eventSetPeriod_Parms
		{
			float InPeriod;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPeriod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::NewProp_InPeriod = { "InPeriod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CircularThrobber_eventSetPeriod_Parms, InPeriod), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::NewProp_InPeriod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "Sets the amount of time for a full circle (in seconds)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularThrobber, nullptr, "SetPeriod", sizeof(CircularThrobber_eventSetPeriod_Parms), Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularThrobber_SetPeriod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics
	{
		struct CircularThrobber_eventSetRadius_Parms
		{
			float InRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::NewProp_InRadius = { "InRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CircularThrobber_eventSetRadius_Parms, InRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::NewProp_InRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "Sets the radius of the circle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularThrobber, nullptr, "SetRadius", sizeof(CircularThrobber_eventSetRadius_Parms), Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularThrobber_SetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCircularThrobber_NoRegister()
	{
		return UCircularThrobber::StaticClass();
	}
	struct Z_Construct_UClass_UCircularThrobber_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRadius_MetaData[];
#endif
		static void NewProp_bEnableRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PieceImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PieceImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCircularThrobber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCircularThrobber_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces, "SetNumberOfPieces" }, // 512827722
		{ &Z_Construct_UFunction_UCircularThrobber_SetPeriod, "SetPeriod" }, // 3849946611
		{ &Z_Construct_UFunction_UCircularThrobber_SetRadius, "SetRadius" }, // 1479408850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/CircularThrobber.h" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "A throbber widget that orients images in a spinning circle.\n\n* No Children\n* Spinner Progress" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
	};
#endif
	void Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius_SetBit(void* Obj)
	{
		((UCircularThrobber*)Obj)->bEnableRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius = { "bEnableRadius", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCircularThrobber), &Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCircularThrobber, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Image_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::NewProp_PieceImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "Image to use for each segment of the throbber" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_PieceImage = { "PieceImage", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCircularThrobber, PieceImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_PieceImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_PieceImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "EditCondition", "bEnableRadius" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCircularThrobber, Radius), METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "The amount of time for a full circle (in seconds)" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCircularThrobber, Period), METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Period_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::NewProp_NumberOfPieces_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "How many pieces there are" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_NumberOfPieces = { "NumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCircularThrobber, NumberOfPieces), METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_NumberOfPieces_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_NumberOfPieces_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCircularThrobber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_PieceImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_NumberOfPieces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCircularThrobber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCircularThrobber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCircularThrobber_Statics::ClassParams = {
		&UCircularThrobber::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCircularThrobber_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCircularThrobber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCircularThrobber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCircularThrobber, 4243330641);
	template<> UMG_API UClass* StaticClass<UCircularThrobber>()
	{
		return UCircularThrobber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCircularThrobber(Z_Construct_UClass_UCircularThrobber, &UCircularThrobber::StaticClass, TEXT("/Script/UMG"), TEXT("UCircularThrobber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCircularThrobber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
