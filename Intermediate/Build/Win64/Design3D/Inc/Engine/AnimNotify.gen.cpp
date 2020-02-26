// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotify_GetNotifyName();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimNotify_Received_Notify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FBranchingPointNotifyPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, Z_Construct_UPackage__Script_Engine(), TEXT("BranchingPointNotifyPayload"), sizeof(FBranchingPointNotifyPayload), Get_Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBranchingPointNotifyPayload>()
{
	return FBranchingPointNotifyPayload::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBranchingPointNotifyPayload(FBranchingPointNotifyPayload::StaticStruct, TEXT("/Script/Engine"), TEXT("BranchingPointNotifyPayload"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBranchingPointNotifyPayload
{
	FScriptStruct_Engine_StaticRegisterNativesFBranchingPointNotifyPayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BranchingPointNotifyPayload")),new UScriptStruct::TCppStructOps<FBranchingPointNotifyPayload>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBranchingPointNotifyPayload;
	struct Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchingPointNotifyPayload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BranchingPointNotifyPayload",
		sizeof(FBranchingPointNotifyPayload),
		alignof(FBranchingPointNotifyPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BranchingPointNotifyPayload"), sizeof(FBranchingPointNotifyPayload), Get_Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Hash() { return 2432735655U; }
	static FName NAME_UAnimNotify_GetNotifyName = FName(TEXT("GetNotifyName"));
	FString UAnimNotify::GetNotifyName() const
	{
		AnimNotify_eventGetNotifyName_Parms Parms;
		const_cast<UAnimNotify*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotify_GetNotifyName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAnimNotify_Received_Notify = FName(TEXT("Received_Notify"));
	bool UAnimNotify::Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const
	{
		AnimNotify_eventReceived_Notify_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		const_cast<UAnimNotify*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotify_Received_Notify),&Parms);
		return !!Parms.ReturnValue;
	}
	void UAnimNotify::StaticRegisterNativesUAnimNotify()
	{
		UClass* Class = UAnimNotify::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNotifyName", &UAnimNotify::execGetNotifyName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotify_eventGetNotifyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
		{ "ToolTip", "Implementable event to get a custom name for the notify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify, nullptr, "GetNotifyName", sizeof(AnimNotify_eventGetNotifyName_Parms), Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotify_GetNotifyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics
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
	void Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNotify_eventReceived_Notify_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimNotify_eventReceived_Notify_Parms), &Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotify_eventReceived_Notify_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotify_eventReceived_Notify_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_MeshComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify, nullptr, "Received_Notify", sizeof(AnimNotify_eventReceived_Notify_Parms), Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotify_Received_Notify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimNotify_NoRegister()
	{
		return UAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotify_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotify_GetNotifyName, "GetNotifyName" }, // 3739292702
		{ &Z_Construct_UFunction_UAnimNotify_Received_Notify, "Received_Notify" }, // 1772770501
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_Statics::NewProp_NotifyColor_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
		{ "ToolTip", "Color of Notify in editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_Statics::NewProp_NotifyColor = { "NotifyColor", nullptr, (EPropertyFlags)0x0010000800000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify, NotifyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_Statics::NewProp_NotifyColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Statics::NewProp_NotifyColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Statics::NewProp_NotifyColor,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_Statics::ClassParams = {
		&UAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimNotify_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Statics::PropPointers), 0),
		0,
		0x001120A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify, 2049770756);
	template<> ENGINE_API UClass* StaticClass<UAnimNotify>()
	{
		return UAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify(Z_Construct_UClass_UAnimNotify, &UAnimNotify::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
