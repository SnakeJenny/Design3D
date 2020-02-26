// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/VRScoutingInteractor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRScoutingInteractor() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_UVRScoutingInteractor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVRScoutingInteractor();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UFunction* Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void UVRScoutingInteractor::StaticRegisterNativesUVRScoutingInteractor()
	{
		UClass* Class = UVRScoutingInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedActors", &UVRScoutingInteractor::execGetSelectedActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics
	{
		struct VRScoutingInteractor_eventGetSelectedActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRScoutingInteractor_eventGetSelectedActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scouting" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
		{ "ToolTip", "Set the VR flight speed cvar" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRScoutingInteractor, nullptr, "GetSelectedActors", sizeof(VRScoutingInteractor_eventGetSelectedActors_Parms), Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRScoutingInteractor_NoRegister()
	{
		return UVRScoutingInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UVRScoutingInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlyingIndicatorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlyingIndicatorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRScoutingInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVREditorInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRScoutingInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors, "GetSelectedActors" }, // 3024515216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRScoutingInteractor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRScoutingInteractor.h" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
		{ "ToolTip", "Represents the interactor in the world" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_FlyingIndicatorComponent_MetaData[] = {
		{ "Category", "Interactor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
		{ "ToolTip", "Shown in Navigation mode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_FlyingIndicatorComponent = { "FlyingIndicatorComponent", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRScoutingInteractor, FlyingIndicatorComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_FlyingIndicatorComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_FlyingIndicatorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRScoutingInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_FlyingIndicatorComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRScoutingInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRScoutingInteractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRScoutingInteractor_Statics::ClassParams = {
		&UVRScoutingInteractor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRScoutingInteractor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UVRScoutingInteractor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVRScoutingInteractor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRScoutingInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRScoutingInteractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRScoutingInteractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRScoutingInteractor, 3405707122);
	template<> VREDITOR_API UClass* StaticClass<UVRScoutingInteractor>()
	{
		return UVRScoutingInteractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRScoutingInteractor(Z_Construct_UClass_UVRScoutingInteractor, &UVRScoutingInteractor::StaticClass, TEXT("/Script/VREditor"), TEXT("UVRScoutingInteractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRScoutingInteractor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
