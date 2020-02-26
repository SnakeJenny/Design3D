// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/StereoLayerFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoLayerFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen();
// End Cross Module References
	void UStereoLayerFunctionLibrary::StaticRegisterNativesUStereoLayerFunctionLibrary()
	{
		UClass* Class = UStereoLayerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableAutoLoadingSplashScreen", &UStereoLayerFunctionLibrary::execEnableAutoLoadingSplashScreen },
			{ "HideSplashScreen", &UStereoLayerFunctionLibrary::execHideSplashScreen },
			{ "SetSplashScreen", &UStereoLayerFunctionLibrary::execSetSplashScreen },
			{ "ShowSplashScreen", &UStereoLayerFunctionLibrary::execShowSplashScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics
	{
		struct StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms
		{
			bool InAutoShowEnabled;
		};
		static void NewProp_InAutoShowEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InAutoShowEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_InAutoShowEnabled_SetBit(void* Obj)
	{
		((StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms*)Obj)->InAutoShowEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_InAutoShowEnabled = { "InAutoShowEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms), &Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_InAutoShowEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::NewProp_InAutoShowEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "Enables/disables splash screen to be automatically shown when LoadMap is called.\n\n@param       bAutoShowEnabled        (in)    True, if automatic showing of splash screens is enabled when map is being loaded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, nullptr, "EnableAutoLoadingSplashScreen", sizeof(StereoLayerFunctionLibrary_eventEnableAutoLoadingSplashScreen_Parms), Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "Hide the splash screen and return to normal display." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, nullptr, "HideSplashScreen", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics
	{
		struct StereoLayerFunctionLibrary_eventSetSplashScreen_Parms
		{
			UTexture* Texture;
			FVector2D Scale;
			FVector Offset;
			bool bShowLoadingMovie;
			bool bShowOnSet;
		};
		static void NewProp_bShowOnSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOnSet;
		static void NewProp_bShowLoadingMovie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLoadingMovie;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowOnSet_SetBit(void* Obj)
	{
		((StereoLayerFunctionLibrary_eventSetSplashScreen_Parms*)Obj)->bShowOnSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowOnSet = { "bShowOnSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms), &Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowOnSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowLoadingMovie_SetBit(void* Obj)
	{
		((StereoLayerFunctionLibrary_eventSetSplashScreen_Parms*)Obj)->bShowLoadingMovie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowLoadingMovie = { "bShowLoadingMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms), &Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowLoadingMovie_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowOnSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_bShowLoadingMovie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "CPP_Default_bShowLoadingMovie", "false" },
		{ "CPP_Default_bShowOnSet", "false" },
		{ "CPP_Default_Offset", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_Scale", "(X=1.000,Y=1.000)" },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "Set splash screen attributes\n\n@param Texture                        (in) A texture to be used for the splash. B8R8G8A8 format.\n@param Scale                          (in) Scale multiplier of the splash screen.\n@param Offset                         (in) Position in UE Units to offset the Splash Screen by\n@param ShowLoadingMovie       (in) Whether the splash screen presents loading movies." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, nullptr, "SetSplashScreen", sizeof(StereoLayerFunctionLibrary_eventSetSplashScreen_Parms), Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "Show the splash screen and override the VR display" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerFunctionLibrary, nullptr, "ShowSplashScreen", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary_NoRegister()
	{
		return UStereoLayerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_EnableAutoLoadingSplashScreen, "EnableAutoLoadingSplashScreen" }, // 2146829777
		{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_HideSplashScreen, "HideSplashScreen" }, // 1108843697
		{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_SetSplashScreen, "SetSplashScreen" }, // 425395082
		{ &Z_Construct_UFunction_UStereoLayerFunctionLibrary_ShowSplashScreen, "ShowSplashScreen" }, // 643287516
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/StereoLayerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/StereoLayerFunctionLibrary.h" },
		{ "ToolTip", "StereoLayer Extensions Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoLayerFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::ClassParams = {
		&UStereoLayerFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoLayerFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStereoLayerFunctionLibrary, 2543674374);
	template<> ENGINE_API UClass* StaticClass<UStereoLayerFunctionLibrary>()
	{
		return UStereoLayerFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStereoLayerFunctionLibrary(Z_Construct_UClass_UStereoLayerFunctionLibrary, &UStereoLayerFunctionLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UStereoLayerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
