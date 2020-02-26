// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationModifiers/Public/AnimationModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationModifier() {}
// Cross Module References
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier_NoRegister();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimationModifiers();
	ANIMATIONMODIFIERS_API UFunction* Z_Construct_UFunction_UAnimationModifier_OnApply();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ANIMATIONMODIFIERS_API UFunction* Z_Construct_UFunction_UAnimationModifier_OnRevert();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static FName NAME_UAnimationModifier_OnApply = FName(TEXT("OnApply"));
	void UAnimationModifier::OnApply(UAnimSequence* AnimationSequence)
	{
		AnimationModifier_eventOnApply_Parms Parms;
		Parms.AnimationSequence=AnimationSequence;
		ProcessEvent(FindFunctionChecked(NAME_UAnimationModifier_OnApply),&Parms);
	}
	static FName NAME_UAnimationModifier_OnRevert = FName(TEXT("OnRevert"));
	void UAnimationModifier::OnRevert(UAnimSequence* AnimationSequence)
	{
		AnimationModifier_eventOnRevert_Parms Parms;
		Parms.AnimationSequence=AnimationSequence;
		ProcessEvent(FindFunctionChecked(NAME_UAnimationModifier_OnRevert),&Parms);
	}
	void UAnimationModifier::StaticRegisterNativesUAnimationModifier()
	{
		UClass* Class = UAnimationModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnApply", &UAnimationModifier::execOnApply },
			{ "OnRevert", &UAnimationModifier::execOnRevert },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationModifier_OnApply_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationModifier_eventOnApply_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::NewProp_AnimationSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
		{ "ToolTip", "Executed when the Animation is initialized (native event for debugging / testing purposes)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationModifier, nullptr, "OnApply", sizeof(AnimationModifier_eventOnApply_Parms), Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationModifier_OnApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationModifier_OnApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationModifier_eventOnRevert_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::NewProp_AnimationSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationModifier, nullptr, "OnRevert", sizeof(AnimationModifier_eventOnRevert_Parms), Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationModifier_OnRevert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationModifier_OnRevert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimationModifier_NoRegister()
	{
		return UAnimationModifier::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredNativeRevision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StoredNativeRevision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AppliedGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevisionGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RevisionGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifiers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationModifier_OnApply, "OnApply" }, // 696535613
		{ &Z_Construct_UFunction_UAnimationModifier_OnRevert, "OnRevert" }, // 1975004805
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimationModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifier_Statics::NewProp_StoredNativeRevision_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
		{ "ToolTip", "This holds the latest value returned by UpdateNativeRevisionGuid during the last PostLoad (changing this value will invalidate the GUIDs for all instances)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimationModifier_Statics::NewProp_StoredNativeRevision = { "StoredNativeRevision", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationModifier, StoredNativeRevision), METADATA_PARAMS(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_StoredNativeRevision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_StoredNativeRevision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifier_Statics::NewProp_AppliedGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
		{ "ToolTip", "VisibleAnywhere for testing, Category = Revision" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationModifier_Statics::NewProp_AppliedGuid = { "AppliedGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationModifier, AppliedGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_AppliedGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_AppliedGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifier_Statics::NewProp_RevisionGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationModifier.h" },
		{ "ToolTip", "VisibleAnywhere for testing, Category = Revision" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationModifier_Statics::NewProp_RevisionGuid = { "RevisionGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationModifier, RevisionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_RevisionGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationModifier_Statics::NewProp_RevisionGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifier_Statics::NewProp_StoredNativeRevision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifier_Statics::NewProp_AppliedGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifier_Statics::NewProp_RevisionGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationModifier_Statics::ClassParams = {
		&UAnimationModifier::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationModifier_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAnimationModifier_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationModifier_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationModifier, 3720782471);
	template<> ANIMATIONMODIFIERS_API UClass* StaticClass<UAnimationModifier>()
	{
		return UAnimationModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationModifier(Z_Construct_UClass_UAnimationModifier, &UAnimationModifier::StaticClass, TEXT("/Script/AnimationModifiers"), TEXT("UAnimationModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
