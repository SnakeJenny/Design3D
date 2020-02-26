// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/ViewportTransformer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportTransformer() {}
// Cross Module References
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportTransformer_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportTransformer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportTransformer_CanAlignToActors();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportTransformer_Init();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportTransformer_OnStartDragging();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor_NoRegister();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportTransformer_OnStopDragging();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportTransformer_Shutdown();
// End Cross Module References
	void UViewportTransformer::StaticRegisterNativesUViewportTransformer()
	{
		UClass* Class = UViewportTransformer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanAlignToActors", &UViewportTransformer::execCanAlignToActors },
			{ "Init", &UViewportTransformer::execInit },
			{ "OnStartDragging", &UViewportTransformer::execOnStartDragging },
			{ "OnStopDragging", &UViewportTransformer::execOnStopDragging },
			{ "ShouldCenterTransformGizmoPivot", &UViewportTransformer::execShouldCenterTransformGizmoPivot },
			{ "Shutdown", &UViewportTransformer::execShutdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics
	{
		struct ViewportTransformer_eventCanAlignToActors_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportTransformer_eventCanAlignToActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ViewportTransformer_eventCanAlignToActors_Parms), &Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
		{ "ToolTip", "@return If this transformer can be used to align its transformable to actors in the scene" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportTransformer, nullptr, "CanAlignToActors", sizeof(ViewportTransformer_eventCanAlignToActors_Parms), Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportTransformer_CanAlignToActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportTransformer_Init_Statics
	{
		struct ViewportTransformer_eventInit_Parms
		{
			UViewportWorldInteraction* InitViewportWorldInteraction;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitViewportWorldInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportTransformer_Init_Statics::NewProp_InitViewportWorldInteraction = { "InitViewportWorldInteraction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportTransformer_eventInit_Parms, InitViewportWorldInteraction), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportTransformer_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportTransformer_Init_Statics::NewProp_InitViewportWorldInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportTransformer_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportTransformer_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportTransformer, nullptr, "Init", sizeof(ViewportTransformer_eventInit_Parms), Z_Construct_UFunction_UViewportTransformer_Init_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportTransformer_Init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportTransformer_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportTransformer_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics
	{
		struct ViewportTransformer_eventOnStartDragging_Parms
		{
			UViewportInteractor* Interactor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportTransformer_eventOnStartDragging_Parms, Interactor), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
		{ "ToolTip", "When starting to drag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportTransformer, nullptr, "OnStartDragging", sizeof(ViewportTransformer_eventOnStartDragging_Parms), Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportTransformer_OnStartDragging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics
	{
		struct ViewportTransformer_eventOnStopDragging_Parms
		{
			UViewportInteractor* Interactor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportTransformer_eventOnStopDragging_Parms, Interactor), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
		{ "ToolTip", "When ending drag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportTransformer, nullptr, "OnStopDragging", sizeof(ViewportTransformer_eventOnStopDragging_Parms), Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportTransformer_OnStopDragging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics
	{
		struct ViewportTransformer_eventShouldCenterTransformGizmoPivot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportTransformer_eventShouldCenterTransformGizmoPivot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ViewportTransformer_eventShouldCenterTransformGizmoPivot_Parms), &Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
		{ "ToolTip", "@return True if the transform gizmo should be aligned to the center of the bounds of all selected objects with more than one is selected.  Otherwise it will be at the pivot of the last transformable, similar to legacl editor actor selection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportTransformer, nullptr, "ShouldCenterTransformGizmoPivot", sizeof(ViewportTransformer_eventShouldCenterTransformGizmoPivot_Parms), Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportTransformer_Shutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportTransformer_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportTransformer_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportTransformer, nullptr, "Shutdown", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportTransformer_Shutdown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportTransformer_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportTransformer_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UViewportTransformer_NoRegister()
	{
		return UViewportTransformer::StaticClass();
	}
	struct Z_Construct_UClass_UViewportTransformer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportWorldInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewportWorldInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportTransformer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportTransformer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportTransformer_CanAlignToActors, "CanAlignToActors" }, // 2845533286
		{ &Z_Construct_UFunction_UViewportTransformer_Init, "Init" }, // 68401147
		{ &Z_Construct_UFunction_UViewportTransformer_OnStartDragging, "OnStartDragging" }, // 3279265433
		{ &Z_Construct_UFunction_UViewportTransformer_OnStopDragging, "OnStopDragging" }, // 1912028165
		{ &Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot, "ShouldCenterTransformGizmoPivot" }, // 4129353583
		{ &Z_Construct_UFunction_UViewportTransformer_Shutdown, "Shutdown" }, // 3405087465
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportTransformer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewportTransformer.h" },
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportTransformer_Statics::NewProp_ViewportWorldInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
		{ "ToolTip", "The viewport world interaction object we're registered with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewportTransformer_Statics::NewProp_ViewportWorldInteraction = { "ViewportWorldInteraction", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportTransformer, ViewportWorldInteraction), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportTransformer_Statics::NewProp_ViewportWorldInteraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportTransformer_Statics::NewProp_ViewportWorldInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewportTransformer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportTransformer_Statics::NewProp_ViewportWorldInteraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportTransformer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportTransformer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UViewportTransformer_Statics::ClassParams = {
		&UViewportTransformer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UViewportTransformer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UViewportTransformer_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportTransformer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UViewportTransformer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportTransformer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UViewportTransformer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewportTransformer, 4158377354);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UViewportTransformer>()
	{
		return UViewportTransformer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewportTransformer(Z_Construct_UClass_UViewportTransformer, &UViewportTransformer::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UViewportTransformer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportTransformer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
