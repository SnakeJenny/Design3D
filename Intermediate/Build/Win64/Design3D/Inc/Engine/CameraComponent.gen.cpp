// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_GetCameraView();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_GetFilmbackText();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_RemoveBlendable();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetAspectRatio();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetFieldOfView();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoWidth();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetProjectionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void UCameraComponent::StaticRegisterNativesUCameraComponent()
	{
		UClass* Class = UCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateBlendable", &UCameraComponent::execAddOrUpdateBlendable },
			{ "GetCameraView", &UCameraComponent::execGetCameraView },
#if WITH_EDITOR
			{ "GetFilmbackText", &UCameraComponent::execGetFilmbackText },
#endif // WITH_EDITOR
			{ "RemoveBlendable", &UCameraComponent::execRemoveBlendable },
			{ "SetAspectRatio", &UCameraComponent::execSetAspectRatio },
			{ "SetConstraintAspectRatio", &UCameraComponent::execSetConstraintAspectRatio },
			{ "SetFieldOfView", &UCameraComponent::execSetFieldOfView },
			{ "SetOrthoFarClipPlane", &UCameraComponent::execSetOrthoFarClipPlane },
			{ "SetOrthoNearClipPlane", &UCameraComponent::execSetOrthoNearClipPlane },
			{ "SetOrthoWidth", &UCameraComponent::execSetOrthoWidth },
			{ "SetPostProcessBlendWeight", &UCameraComponent::execSetPostProcessBlendWeight },
			{ "SetProjectionMode", &UCameraComponent::execSetProjectionMode },
			{ "SetUseFieldOfViewForLOD", &UCameraComponent::execSetUseFieldOfViewForLOD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics
	{
		struct CameraComponent_eventAddOrUpdateBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
			float InWeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWeight;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::NewProp_InWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "AddOrUpdateBlendable", sizeof(CameraComponent_eventAddOrUpdateBlendable_Parms), Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics
	{
		struct CameraComponent_eventGetCameraView_Parms
		{
			float DeltaTime;
			FMinimalViewInfo DesiredView;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredView;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::NewProp_DesiredView = { "DesiredView", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventGetCameraView_Parms, DesiredView), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventGetCameraView_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::NewProp_DesiredView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Returns camera's Point of View.\nCalled by Camera class. Subclass and postprocess to add any effects." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "GetCameraView", sizeof(CameraComponent_eventGetCameraView_Parms), Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_GetCameraView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics
	{
		struct CameraComponent_eventGetFilmbackText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventGetFilmbackText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Returns the filmback text used for burnins on preview viewports" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "GetFilmbackText", sizeof(CameraComponent_eventGetFilmbackText_Parms), Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x60020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_GetFilmbackText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics
	{
		struct CameraComponent_eventRemoveBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventRemoveBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::NewProp_InBlendableObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Removes a blendable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "RemoveBlendable", sizeof(CameraComponent_eventRemoveBlendable_Parms), Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_RemoveBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics
	{
		struct CameraComponent_eventSetAspectRatio_Parms
		{
			float InAspectRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAspectRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::NewProp_InAspectRatio = { "InAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventSetAspectRatio_Parms, InAspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::NewProp_InAspectRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetAspectRatio", sizeof(CameraComponent_eventSetAspectRatio_Parms), Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics
	{
		struct CameraComponent_eventSetConstraintAspectRatio_Parms
		{
			bool bInConstrainAspectRatio;
		};
		static void NewProp_bInConstrainAspectRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInConstrainAspectRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::NewProp_bInConstrainAspectRatio_SetBit(void* Obj)
	{
		((CameraComponent_eventSetConstraintAspectRatio_Parms*)Obj)->bInConstrainAspectRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::NewProp_bInConstrainAspectRatio = { "bInConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraComponent_eventSetConstraintAspectRatio_Parms), &Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::NewProp_bInConstrainAspectRatio_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::NewProp_bInConstrainAspectRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetConstraintAspectRatio", sizeof(CameraComponent_eventSetConstraintAspectRatio_Parms), Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics
	{
		struct CameraComponent_eventSetFieldOfView_Parms
		{
			float InFieldOfView;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFieldOfView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::NewProp_InFieldOfView = { "InFieldOfView", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventSetFieldOfView_Parms, InFieldOfView), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::NewProp_InFieldOfView,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetFieldOfView", sizeof(CameraComponent_eventSetFieldOfView_Parms), Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics
	{
		struct CameraComponent_eventSetOrthoFarClipPlane_Parms
		{
			float InOrthoFarClipPlane;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOrthoFarClipPlane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::NewProp_InOrthoFarClipPlane = { "InOrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventSetOrthoFarClipPlane_Parms, InOrthoFarClipPlane), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::NewProp_InOrthoFarClipPlane,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetOrthoFarClipPlane", sizeof(CameraComponent_eventSetOrthoFarClipPlane_Parms), Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics
	{
		struct CameraComponent_eventSetOrthoNearClipPlane_Parms
		{
			float InOrthoNearClipPlane;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOrthoNearClipPlane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::NewProp_InOrthoNearClipPlane = { "InOrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventSetOrthoNearClipPlane_Parms, InOrthoNearClipPlane), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::NewProp_InOrthoNearClipPlane,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetOrthoNearClipPlane", sizeof(CameraComponent_eventSetOrthoNearClipPlane_Parms), Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics
	{
		struct CameraComponent_eventSetOrthoWidth_Parms
		{
			float InOrthoWidth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOrthoWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::NewProp_InOrthoWidth = { "InOrthoWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventSetOrthoWidth_Parms, InOrthoWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::NewProp_InOrthoWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetOrthoWidth", sizeof(CameraComponent_eventSetOrthoWidth_Parms), Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics
	{
		struct CameraComponent_eventSetPostProcessBlendWeight_Parms
		{
			float InPostProcessBlendWeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPostProcessBlendWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::NewProp_InPostProcessBlendWeight = { "InPostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventSetPostProcessBlendWeight_Parms, InPostProcessBlendWeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::NewProp_InPostProcessBlendWeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetPostProcessBlendWeight", sizeof(CameraComponent_eventSetPostProcessBlendWeight_Parms), Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics
	{
		struct CameraComponent_eventSetProjectionMode_Parms
		{
			TEnumAsByte<ECameraProjectionMode::Type> InProjectionMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InProjectionMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::NewProp_InProjectionMode = { "InProjectionMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraComponent_eventSetProjectionMode_Parms, InProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::NewProp_InProjectionMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetProjectionMode", sizeof(CameraComponent_eventSetProjectionMode_Parms), Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetProjectionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics
	{
		struct CameraComponent_eventSetUseFieldOfViewForLOD_Parms
		{
			bool bInUseFieldOfViewForLOD;
		};
		static void NewProp_bInUseFieldOfViewForLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInUseFieldOfViewForLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::NewProp_bInUseFieldOfViewForLOD_SetBit(void* Obj)
	{
		((CameraComponent_eventSetUseFieldOfViewForLOD_Parms*)Obj)->bInUseFieldOfViewForLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::NewProp_bInUseFieldOfViewForLOD = { "bInUseFieldOfViewForLOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraComponent_eventSetUseFieldOfViewForLOD_Parms), &Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::NewProp_bInUseFieldOfViewForLOD_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::NewProp_bInUseFieldOfViewForLOD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetUseFieldOfViewForLOD", sizeof(CameraComponent_eventSetUseFieldOfViewForLOD_Parms), Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraComponent_NoRegister()
	{
		return UCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerViewRotation_MetaData[];
#endif
		static void NewProp_bUseControllerViewRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerViewRotation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProjectionMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePawnControlRotation_MetaData[];
#endif
		static void NewProp_bUsePawnControlRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePawnControlRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockToHmd_MetaData[];
#endif
		static void NewProp_bLockToHmd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockToHmd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFieldOfViewForLOD_MetaData[];
#endif
		static void NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFieldOfViewForLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[];
#endif
		static void NewProp_bConstrainAspectRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoFarClipPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoFarClipPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoNearClipPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoNearClipPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 2452798045
		{ &Z_Construct_UFunction_UCameraComponent_GetCameraView, "GetCameraView" }, // 2244633416
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCameraComponent_GetFilmbackText, "GetFilmbackText" }, // 2033168265
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UCameraComponent_RemoveBlendable, "RemoveBlendable" }, // 2119994272
		{ &Z_Construct_UFunction_UCameraComponent_SetAspectRatio, "SetAspectRatio" }, // 2380897455
		{ &Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio, "SetConstraintAspectRatio" }, // 3987874837
		{ &Z_Construct_UFunction_UCameraComponent_SetFieldOfView, "SetFieldOfView" }, // 522384065
		{ &Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane, "SetOrthoFarClipPlane" }, // 275392961
		{ &Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane, "SetOrthoNearClipPlane" }, // 2078917250
		{ &Z_Construct_UFunction_UCameraComponent_SetOrthoWidth, "SetOrthoWidth" }, // 3582243472
		{ &Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight, "SetPostProcessBlendWeight" }, // 3445020052
		{ &Z_Construct_UFunction_UCameraComponent_SetProjectionMode, "SetProjectionMode" }, // 4289181406
		{ &Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD, "SetUseFieldOfViewForLOD" }, // 1734231115
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/CameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "SerializeToFArchive", "WITH_EDITORONLY_DATA" },
		{ "ToolTip", "Represents a camera viewpoint and settings, such as projection type, field of view, and post-process overrides.\nThe default behavior for an actor used as the camera view target is to look for an attached camera component and use its location, rotation, and settings." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "DEPRECATED: use bUsePawnControlRotation instead" },
	};
#endif
	void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation_SetBit(void* Obj)
	{
		((UCameraComponent*)Obj)->bUseControllerViewRotation_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation = { "bUseControllerViewRotation", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Post process settings to use for this camera. Don't forget to check the properties you want to override" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraComponent, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Indicates if PostProcessSettings should be used when using this Camera to view through." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraComponent, PostProcessBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_CameraMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_CameraMesh = { "CameraMesh", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraComponent, CameraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_CameraMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_CameraMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The type of camera" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraComponent, ProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_ProjectionMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_ProjectionMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "If this camera component is placed on a pawn, should it use the view/control rotation of the pawn where possible?\n@see APawn::GetViewRotation()" },
	};
#endif
	void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_SetBit(void* Obj)
	{
		((UCameraComponent*)Obj)->bUsePawnControlRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation = { "bUsePawnControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "True if the camera's orientation and position should be locked to the HMD" },
	};
#endif
	void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_SetBit(void* Obj)
	{
		((UCameraComponent*)Obj)->bLockToHmd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd = { "bLockToHmd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "If true, account for the field of view angle when computing which level of detail to use for meshes." },
	};
#endif
	void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj)
	{
		((UCameraComponent*)Obj)->bUseFieldOfViewForLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD = { "bUseFieldOfViewForLOD", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested." },
	};
#endif
	void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_SetBit(void* Obj)
	{
		((UCameraComponent*)Obj)->bConstrainAspectRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio = { "bConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "EditCondition", "bConstrainAspectRatio" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Aspect Ratio (Width/Height)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraComponent, AspectRatio), METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoFarClipPlane_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The far plane distance of the orthographic view (in world units)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoFarClipPlane = { "OrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraComponent, OrthoFarClipPlane), METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoFarClipPlane_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoFarClipPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoNearClipPlane_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The near plane distance of the orthographic view (in world units)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoNearClipPlane = { "OrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraComponent, OrthoNearClipPlane), METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoNearClipPlane_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoNearClipPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraComponent, OrthoWidth), METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The horizontal field of view (in degrees) in perspective mode (ignored in Orthographic mode)" },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
		{ "Units", "deg" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraComponent, FieldOfView), METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_FieldOfView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_FieldOfView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessBlendWeight,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_CameraMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_ProjectionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoFarClipPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoNearClipPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_FieldOfView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraComponent_Statics::ClassParams = {
		&UCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraComponent, 2655860084);
	template<> ENGINE_API UClass* StaticClass<UCameraComponent>()
	{
		return UCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraComponent(Z_Construct_UClass_UCameraComponent, &UCameraComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraComponent);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCameraComponent)
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
