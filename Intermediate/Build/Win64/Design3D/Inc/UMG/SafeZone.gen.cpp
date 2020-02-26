// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/SafeZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeZone() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_USafeZone_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USafeZone();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_USafeZone_SetSidesToPad();
// End Cross Module References
	void USafeZone::StaticRegisterNativesUSafeZone()
	{
		UClass* Class = USafeZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSidesToPad", &USafeZone::execSetSidesToPad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics
	{
		struct SafeZone_eventSetSidesToPad_Parms
		{
			bool InPadLeft;
			bool InPadRight;
			bool InPadTop;
			bool InPadBottom;
		};
		static void NewProp_InPadBottom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPadBottom;
		static void NewProp_InPadTop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPadTop;
		static void NewProp_InPadRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPadRight;
		static void NewProp_InPadLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InPadLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadBottom_SetBit(void* Obj)
	{
		((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadBottom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadBottom = { "InPadBottom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SafeZone_eventSetSidesToPad_Parms), &Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadBottom_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadTop_SetBit(void* Obj)
	{
		((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadTop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadTop = { "InPadTop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SafeZone_eventSetSidesToPad_Parms), &Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadTop_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadRight_SetBit(void* Obj)
	{
		((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadRight = { "InPadRight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SafeZone_eventSetSidesToPad_Parms), &Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadRight_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadLeft_SetBit(void* Obj)
	{
		((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadLeft = { "InPadLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SafeZone_eventSetSidesToPad_Parms), &Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::Function_MetaDataParams[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USafeZone, nullptr, "SetSidesToPad", sizeof(SafeZone_eventSetSidesToPad_Parms), Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USafeZone_SetSidesToPad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USafeZone_NoRegister()
	{
		return USafeZone::StaticClass();
	}
	struct Z_Construct_UClass_USafeZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadBottom_MetaData[];
#endif
		static void NewProp_PadBottom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PadBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadTop_MetaData[];
#endif
		static void NewProp_PadTop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PadTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadRight_MetaData[];
#endif
		static void NewProp_PadRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PadRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadLeft_MetaData[];
#endif
		static void NewProp_PadLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PadLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USafeZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USafeZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USafeZone_SetSidesToPad, "SetSidesToPad" }, // 2207010865
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/SafeZone.h" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "The Safe-Zone widget is an essential part of developing a game UI that can run on lots of different non-PC platforms.\nWhile a modern flat panel computer monitor may not have over scan issues, this is a common occurrence for Consoles.\nIt's common for TVs to have extra pixels under the bezel, in addition to projectors and projection TVs having potentially\nseveral vertical and horizontal columns of pixels hidden behind or against a black border of the projection screen.\n\nUseful testing console commands to help, simulate the safe zone on PC,\n  r.DebugSafeZone.TitleRatio 0.96\n  r.DebugActionZone.ActionRatio 0.96\n\nTo enable a red band to visualize the safe zone, use this console command,\nr.DebugSafeZone.Mode controls the debug visualization overlay (0..2, default 0).\n  0: Do not display the safe zone overlay.\n  1: Display the overlay for the title safe zone.\n  2: Display the overlay for the action safe zone." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "If this safe zone should pad for the bottom side of the screen's safe zone" },
	};
#endif
	void Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom_SetBit(void* Obj)
	{
		((USafeZone*)Obj)->PadBottom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom = { "PadBottom", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USafeZone), &Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom_MetaData, ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "If this safe zone should pad for the top side of the screen's safe zone" },
	};
#endif
	void Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop_SetBit(void* Obj)
	{
		((USafeZone*)Obj)->PadTop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop = { "PadTop", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USafeZone), &Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop_MetaData, ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "If this safe zone should pad for the right side of the screen's safe zone" },
	};
#endif
	void Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight_SetBit(void* Obj)
	{
		((USafeZone*)Obj)->PadRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight = { "PadRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USafeZone), &Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "If this safe zone should pad for the left side of the screen's safe zone" },
	};
#endif
	void Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft_SetBit(void* Obj)
	{
		((USafeZone*)Obj)->PadLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft = { "PadLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USafeZone), &Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USafeZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USafeZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USafeZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USafeZone_Statics::ClassParams = {
		&USafeZone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USafeZone_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USafeZone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USafeZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USafeZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USafeZone, 3581053765);
	template<> UMG_API UClass* StaticClass<USafeZone>()
	{
		return USafeZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USafeZone(Z_Construct_UClass_USafeZone, &USafeZone::StaticClass, TEXT("/Script/UMG"), TEXT("USafeZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USafeZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
