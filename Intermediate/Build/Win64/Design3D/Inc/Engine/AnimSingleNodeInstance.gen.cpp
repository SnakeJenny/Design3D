// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimSingleNodeInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSingleNodeInstance() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSingleNodeInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSingleNodeInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "PostEvaluateAnimEvent__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAnimSingleNodeInstance::StaticRegisterNativesUAnimSingleNodeInstance()
	{
		UClass* Class = UAnimSingleNodeInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationAsset", &UAnimSingleNodeInstance::execGetAnimationAsset },
			{ "GetLength", &UAnimSingleNodeInstance::execGetLength },
			{ "PlayAnim", &UAnimSingleNodeInstance::execPlayAnim },
			{ "SetAnimationAsset", &UAnimSingleNodeInstance::execSetAnimationAsset },
			{ "SetBlendSpaceInput", &UAnimSingleNodeInstance::execSetBlendSpaceInput },
			{ "SetLooping", &UAnimSingleNodeInstance::execSetLooping },
			{ "SetPlaying", &UAnimSingleNodeInstance::execSetPlaying },
			{ "SetPlayRate", &UAnimSingleNodeInstance::execSetPlayRate },
			{ "SetPosition", &UAnimSingleNodeInstance::execSetPosition },
			{ "SetPositionWithPreviousTime", &UAnimSingleNodeInstance::execSetPositionWithPreviousTime },
			{ "SetPreviewCurveOverride", &UAnimSingleNodeInstance::execSetPreviewCurveOverride },
			{ "SetReverse", &UAnimSingleNodeInstance::execSetReverse },
			{ "StopAnim", &UAnimSingleNodeInstance::execStopAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics
	{
		struct AnimSingleNodeInstance_eventGetAnimationAsset_Parms
		{
			UAnimationAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventGetAnimationAsset_Parms, ReturnValue), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
		{ "ToolTip", "Get the currently used asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "GetAnimationAsset", sizeof(AnimSingleNodeInstance_eventGetAnimationAsset_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics
	{
		struct AnimSingleNodeInstance_eventGetLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "GetLength", sizeof(AnimSingleNodeInstance_eventGetLength_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics
	{
		struct AnimSingleNodeInstance_eventPlayAnim_Parms
		{
			bool bIsLooping;
			float InPlayRate;
			float InStartPosition;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStartPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static void NewProp_bIsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_InStartPosition = { "InStartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventPlayAnim_Parms, InStartPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventPlayAnim_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_bIsLooping_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventPlayAnim_Parms*)Obj)->bIsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimSingleNodeInstance_eventPlayAnim_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_InStartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_InPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_bIsLooping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "CPP_Default_bIsLooping", "false" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_InStartPosition", "0.000000" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
		{ "ToolTip", "For AnimSequence specific *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "PlayAnim", sizeof(AnimSingleNodeInstance_eventPlayAnim_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics
	{
		struct AnimSingleNodeInstance_eventSetAnimationAsset_Parms
		{
			UAnimationAsset* NewAsset;
			bool bIsLooping;
			float InPlayRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static void NewProp_bIsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetAnimationAsset_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_bIsLooping_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetAnimationAsset_Parms*)Obj)->bIsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetAnimationAsset_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetAnimationAsset_Parms, NewAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_InPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_bIsLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_NewAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "CPP_Default_bIsLooping", "true" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
		{ "ToolTip", "Set New Asset - calls InitializeAnimation, for now we need MeshComponent *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetAnimationAsset", sizeof(AnimSingleNodeInstance_eventSetAnimationAsset_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics
	{
		struct AnimSingleNodeInstance_eventSetBlendSpaceInput_Parms
		{
			FVector InBlendInput;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBlendInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBlendInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::NewProp_InBlendInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::NewProp_InBlendInput = { "InBlendInput", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetBlendSpaceInput_Parms, InBlendInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::NewProp_InBlendInput_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::NewProp_InBlendInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::NewProp_InBlendInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetBlendSpaceInput", sizeof(AnimSingleNodeInstance_eventSetBlendSpaceInput_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics
	{
		struct AnimSingleNodeInstance_eventSetLooping_Parms
		{
			bool bIsLooping;
		};
		static void NewProp_bIsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::NewProp_bIsLooping_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetLooping_Parms*)Obj)->bIsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetLooping_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::NewProp_bIsLooping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetLooping", sizeof(AnimSingleNodeInstance_eventSetLooping_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics
	{
		struct AnimSingleNodeInstance_eventSetPlaying_Parms
		{
			bool bIsPlaying;
		};
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetPlaying_Parms*)Obj)->bIsPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetPlaying_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::NewProp_bIsPlaying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetPlaying", sizeof(AnimSingleNodeInstance_eventSetPlaying_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics
	{
		struct AnimSingleNodeInstance_eventSetPlayRate_Parms
		{
			float InPlayRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPlayRate_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::NewProp_InPlayRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetPlayRate", sizeof(AnimSingleNodeInstance_eventSetPlayRate_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics
	{
		struct AnimSingleNodeInstance_eventSetPosition_Parms
		{
			float InPosition;
			bool bFireNotifies;
		};
		static void NewProp_bFireNotifies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireNotifies;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_bFireNotifies_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetPosition_Parms*)Obj)->bFireNotifies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_bFireNotifies = { "bFireNotifies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetPosition_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_bFireNotifies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPosition_Parms, InPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_bFireNotifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_InPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "CPP_Default_bFireNotifies", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetPosition", sizeof(AnimSingleNodeInstance_eventSetPosition_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics
	{
		struct AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms
		{
			float InPosition;
			float InPreviousTime;
			bool bFireNotifies;
		};
		static void NewProp_bFireNotifies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireNotifies;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPreviousTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_bFireNotifies_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms*)Obj)->bFireNotifies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_bFireNotifies = { "bFireNotifies", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_bFireNotifies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_InPreviousTime = { "InPreviousTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms, InPreviousTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms, InPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_bFireNotifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_InPreviousTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_InPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "CPP_Default_bFireNotifies", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetPositionWithPreviousTime", sizeof(AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics
	{
		struct AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms
		{
			FName PoseName;
			float Value;
			bool bRemoveIfZero;
		};
		static void NewProp_bRemoveIfZero_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveIfZero;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PoseName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_bRemoveIfZero_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms*)Obj)->bRemoveIfZero = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_bRemoveIfZero = { "bRemoveIfZero", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_bRemoveIfZero_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_PoseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms, PoseName), METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_PoseName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_PoseName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_bRemoveIfZero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_PoseName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
		{ "ToolTip", "Set pose value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetPreviewCurveOverride", sizeof(AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics
	{
		struct AnimSingleNodeInstance_eventSetReverse_Parms
		{
			bool bInReverse;
		};
		static void NewProp_bInReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInReverse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::NewProp_bInReverse_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetReverse_Parms*)Obj)->bInReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::NewProp_bInReverse = { "bInReverse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetReverse_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::NewProp_bInReverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::NewProp_bInReverse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetReverse", sizeof(AnimSingleNodeInstance_eventSetReverse_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "StopAnim", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimSingleNodeInstance_NoRegister()
	{
		return UAnimSingleNodeInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSingleNodeInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEvaluateAnimEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEvaluateAnimEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSingleNodeInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimSingleNodeInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset, "GetAnimationAsset" }, // 4286248332
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength, "GetLength" }, // 1032304352
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim, "PlayAnim" }, // 2303566410
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset, "SetAnimationAsset" }, // 1566335292
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpaceInput, "SetBlendSpaceInput" }, // 2850306180
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping, "SetLooping" }, // 2202819816
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying, "SetPlaying" }, // 800258372
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate, "SetPlayRate" }, // 3249630896
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition, "SetPosition" }, // 1405360038
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime, "SetPositionWithPreviousTime" }, // 344573738
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride, "SetPreviewCurveOverride" }, // 3161956146
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse, "SetReverse" }, // 1869500868
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim, "StopAnim" }, // 3153525775
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSingleNodeInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/AnimSingleNodeInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_PostEvaluateAnimEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_PostEvaluateAnimEvent = { "PostEvaluateAnimEvent", nullptr, (EPropertyFlags)0x0010000000082000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSingleNodeInstance, PostEvaluateAnimEvent), Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_PostEvaluateAnimEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_PostEvaluateAnimEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_CurrentAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
		{ "ToolTip", "Current Asset being played *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_CurrentAsset = { "CurrentAsset", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSingleNodeInstance, CurrentAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_CurrentAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_CurrentAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSingleNodeInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_PostEvaluateAnimEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_CurrentAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSingleNodeInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSingleNodeInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimSingleNodeInstance_Statics::ClassParams = {
		&UAnimSingleNodeInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimSingleNodeInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSingleNodeInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimSingleNodeInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSingleNodeInstance, 1701049449);
	template<> ENGINE_API UClass* StaticClass<UAnimSingleNodeInstance>()
	{
		return UAnimSingleNodeInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSingleNodeInstance(Z_Construct_UClass_UAnimSingleNodeInstance, &UAnimSingleNodeInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimSingleNodeInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSingleNodeInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
