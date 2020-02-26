// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FieldSystemEngine/Public/Field/FieldSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSystemComponent() {}
// Cross Module References
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemComponent_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_FieldSystemEngine();
	FIELDSYSTEMENGINE_API UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FIELDSYSTEMENGINE_API UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce();
	FIELDSYSTEMENGINE_API UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce();
	FIELDSYSTEMENGINE_API UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField();
	FIELDSYSTEMENGINE_API UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce();
	FIELDSYSTEMCORE_API UClass* Z_Construct_UClass_UFieldSystem_NoRegister();
// End Cross Module References
	void UFieldSystemComponent::StaticRegisterNativesUFieldSystemComponent()
	{
		UClass* Class = UFieldSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyLinearForce", &UFieldSystemComponent::execApplyLinearForce },
			{ "ApplyRadialForce", &UFieldSystemComponent::execApplyRadialForce },
			{ "ApplyRadialVectorFalloffForce", &UFieldSystemComponent::execApplyRadialVectorFalloffForce },
			{ "ApplyStayDynamicField", &UFieldSystemComponent::execApplyStayDynamicField },
			{ "ApplyUniformVectorFalloffForce", &UFieldSystemComponent::execApplyUniformVectorFalloffForce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics
	{
		struct FieldSystemComponent_eventApplyLinearForce_Parms
		{
			bool Enabled;
			FVector Direction;
			float Magnitude;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyLinearForce_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyLinearForce_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventApplyLinearForce_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyLinearForce_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyLinearForce", sizeof(FieldSystemComponent_eventApplyLinearForce_Parms), Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics
	{
		struct FieldSystemComponent_eventApplyRadialForce_Parms
		{
			bool Enabled;
			FVector Position;
			float Magnitude;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialForce_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialForce_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventApplyRadialForce_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyRadialForce_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyRadialForce", sizeof(FieldSystemComponent_eventApplyRadialForce_Parms), Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics
	{
		struct FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms
		{
			bool Enabled;
			FVector Position;
			float Radius;
			float Magnitude;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyRadialVectorFalloffForce", sizeof(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms), Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics
	{
		struct FieldSystemComponent_eventApplyStayDynamicField_Parms
		{
			bool Enabled;
			FVector Position;
			float Radius;
			int32 MaxLevelPerCommand;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxLevelPerCommand;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_MaxLevelPerCommand = { "MaxLevelPerCommand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStayDynamicField_Parms, MaxLevelPerCommand), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStayDynamicField_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStayDynamicField_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventApplyStayDynamicField_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyStayDynamicField_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_MaxLevelPerCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyStayDynamicField", sizeof(FieldSystemComponent_eventApplyStayDynamicField_Parms), Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics
	{
		struct FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms
		{
			bool Enabled;
			FVector Position;
			FVector Direction;
			float Radius;
			float Magnitude;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyUniformVectorFalloffForce", sizeof(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms), Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFieldSystemComponent_NoRegister()
	{
		return UFieldSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFieldSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FieldSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFieldSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFieldSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce, "ApplyLinearForce" }, // 2360172331
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce, "ApplyRadialForce" }, // 1243915156
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce, "ApplyRadialVectorFalloffForce" }, // 3036521314
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField, "ApplyStayDynamicField" }, // 670073690
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce, "ApplyUniformVectorFalloffForce" }, // 1020142096
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Field/FieldSystemComponent.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "FieldSystemComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_FieldSystem_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_FieldSystem = { "FieldSystem", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFieldSystemComponent, FieldSystem), Z_Construct_UClass_UFieldSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_FieldSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_FieldSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFieldSystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_FieldSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFieldSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldSystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFieldSystemComponent_Statics::ClassParams = {
		&UFieldSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFieldSystemComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFieldSystemComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFieldSystemComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFieldSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFieldSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFieldSystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFieldSystemComponent, 2334729389);
	template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UFieldSystemComponent>()
	{
		return UFieldSystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFieldSystemComponent(Z_Construct_UClass_UFieldSystemComponent, &UFieldSystemComponent::StaticClass, TEXT("/Script/FieldSystemEngine"), TEXT("UFieldSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
