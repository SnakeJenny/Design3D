// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotifyState_GetNotifyName();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static FName NAME_UAnimNotifyState_GetNotifyName = FName(TEXT("GetNotifyName"));
	FString UAnimNotifyState::GetNotifyName() const
	{
		AnimNotifyState_eventGetNotifyName_Parms Parms;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_GetNotifyName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAnimNotifyState_Received_NotifyBegin = FName(TEXT("Received_NotifyBegin"));
	bool UAnimNotifyState::Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) const
	{
		AnimNotifyState_eventReceived_NotifyBegin_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		Parms.TotalDuration=TotalDuration;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Received_NotifyBegin),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAnimNotifyState_Received_NotifyEnd = FName(TEXT("Received_NotifyEnd"));
	bool UAnimNotifyState::Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const
	{
		AnimNotifyState_eventReceived_NotifyEnd_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Received_NotifyEnd),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAnimNotifyState_Received_NotifyTick = FName(TEXT("Received_NotifyTick"));
	bool UAnimNotifyState::Received_NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) const
	{
		AnimNotifyState_eventReceived_NotifyTick_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		Parms.FrameDeltaTime=FrameDeltaTime;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Received_NotifyTick),&Parms);
		return !!Parms.ReturnValue;
	}
	void UAnimNotifyState::StaticRegisterNativesUAnimNotifyState()
	{
		UClass* Class = UAnimNotifyState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNotifyName", &UAnimNotifyState::execGetNotifyName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_eventGetNotifyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ToolTip", "Implementable event to get a custom name for the notify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "GetNotifyName", sizeof(AnimNotifyState_eventGetNotifyName_Parms), Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_GetNotifyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNotifyState_eventReceived_NotifyBegin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimNotifyState_eventReceived_NotifyBegin_Parms), &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, TotalDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_TotalDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_MeshComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "Received_NotifyBegin", sizeof(AnimNotifyState_eventReceived_NotifyBegin_Parms), Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNotifyState_eventReceived_NotifyEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimNotifyState_eventReceived_NotifyEnd_Parms), &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyEnd_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyEnd_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_MeshComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "Received_NotifyEnd", sizeof(AnimNotifyState_eventReceived_NotifyEnd_Parms), Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameDeltaTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNotifyState_eventReceived_NotifyTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimNotifyState_eventReceived_NotifyTick_Parms), &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_FrameDeltaTime = { "FrameDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, FrameDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_FrameDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_MeshComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "Received_NotifyTick", sizeof(AnimNotifyState_eventReceived_NotifyTick_Parms), Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister()
	{
		return UAnimNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotifyState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_GetNotifyName, "GetNotifyName" }, // 2518031357
		{ &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin, "Received_NotifyBegin" }, // 1282398757
		{ &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd, "Received_NotifyEnd" }, // 420823928
		{ &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick, "Received_NotifyTick" }, // 1192423820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_NotifyColor_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ToolTip", "Color of Notify in editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_NotifyColor = { "NotifyColor", nullptr, (EPropertyFlags)0x0010000800000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotifyState, NotifyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_NotifyColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_NotifyColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_NotifyColor,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_Statics::ClassParams = {
		&UAnimNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimNotifyState_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Statics::PropPointers), 0),
		0,
		0x001130A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyState, 465351651);
	template<> ENGINE_API UClass* StaticClass<UAnimNotifyState>()
	{
		return UAnimNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyState(Z_Construct_UClass_UAnimNotifyState, &UAnimNotifyState::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
