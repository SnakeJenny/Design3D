// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchiveFromArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpression() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionOutput();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
// End Cross Module References
	struct Z_Construct_UScriptStruct_FExpressionOutput_Statics
	{
		struct FExpressionOutput
		{
			FName OutputName;
#if WITH_EDITORONLY_DATA
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
#endif // WITH_EDITORONLY_DATA
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskA_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskG_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskR_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Struct that represents an expression's output." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskA_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskA = { "MaskA", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionOutput, MaskA), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskA_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskB = { "MaskB", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionOutput, MaskB), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskB_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskG_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskG = { "MaskG", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionOutput, MaskG), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskG_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskR_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskR = { "MaskR", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionOutput, MaskR), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskR_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionOutput, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_Mask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_Mask_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_OutputName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionOutput, OutputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_OutputName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_OutputName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpressionOutput_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_Mask,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_OutputName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"ExpressionOutput",
		sizeof(FExpressionOutput),
		alignof(FExpressionOutput),
		Z_Construct_UScriptStruct_FExpressionOutput_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpressionOutput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExpressionOutput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExpressionOutput"), sizeof(Z_Construct_UScriptStruct_FExpressionOutput_Statics::FExpressionOutput), Get_Z_Construct_UScriptStruct_FExpressionOutput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExpressionOutput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExpressionOutput_Hash() { return 580479133U; }
	struct Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics
	{
		struct FExpressionInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
#if WITH_EDITORONLY_DATA
			FName InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
#endif // WITH_EDITORONLY_DATA
			FName ExpressionName;
		};

		struct FMaterialAttributesInput : public FExpressionInput
		{
			int32 PropertyConnectedBitmask;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyConnectedBitmask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PropertyConnectedBitmask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::NewProp_PropertyConnectedBitmask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::NewProp_PropertyConnectedBitmask = { "PropertyConnectedBitmask", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialAttributesInput, PropertyConnectedBitmask), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::NewProp_PropertyConnectedBitmask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::NewProp_PropertyConnectedBitmask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::NewProp_PropertyConnectedBitmask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FExpressionInput,
		nullptr,
		"MaterialAttributesInput",
		sizeof(FMaterialAttributesInput),
		alignof(FMaterialAttributesInput),
		Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialAttributesInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialAttributesInput"), sizeof(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::FMaterialAttributesInput), Get_Z_Construct_UScriptStruct_FMaterialAttributesInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialAttributesInput_Hash() { return 494879753U; }
	struct Z_Construct_UScriptStruct_FExpressionInput_Statics
	{
		struct FExpressionInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
#if WITH_EDITORONLY_DATA
			FName InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
#endif // WITH_EDITORONLY_DATA
			FName ExpressionName;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExpressionName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskA_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskG_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskR_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expression;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "@warning: FExpressionInput is mirrored in MaterialShared.h and manually \"subclassed\" in Material.h (FMaterialInput)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_ExpressionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Material expression name that this input is connected to, or None if not connected. Used only in cooked builds" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_ExpressionName = { "ExpressionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionInput, ExpressionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_ExpressionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_ExpressionName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskA_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskA = { "MaskA", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionInput, MaskA), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskA_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskB = { "MaskB", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionInput, MaskB), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskB_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskG_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskG = { "MaskG", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionInput, MaskG), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskG_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskR_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskR = { "MaskR", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionInput, MaskR), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskR_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionInput, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Mask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Mask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_InputName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "optional FName of the input.\nNote that this is the only member which is not derived from the output currently connected." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionInput, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_InputName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_InputName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_OutputIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Index into Expression's outputs array that this input is connected to." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionInput, OutputIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_OutputIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_OutputIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Expression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "UMaterial expression that this input is connected to, or NULL if not connected." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExpressionInput, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Expression_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Expression_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpressionInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_ExpressionName,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_InputName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_OutputIndex,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Expression,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpressionInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"ExpressionInput",
		sizeof(FExpressionInput),
		alignof(FExpressionInput),
		Z_Construct_UScriptStruct_FExpressionInput_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExpressionInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExpressionInput"), sizeof(Z_Construct_UScriptStruct_FExpressionInput_Statics::FExpressionInput), Get_Z_Construct_UScriptStruct_FExpressionInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExpressionInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExpressionInput_Hash() { return 1178716337U; }
	void UMaterialExpression::StaticRegisterNativesUMaterialExpression()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpression_NoRegister()
	{
		return UMaterialExpression::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpression_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MenuCategories;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MenuCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOutputs_MetaData[];
#endif
		static void NewProp_bShowOutputs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOutputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInputs_MetaData[];
#endif
		static void NewProp_bShowInputs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShaderInputData_MetaData[];
#endif
		static void NewProp_bShaderInputData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShaderInputData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCollapsed_MetaData[];
#endif
		static void NewProp_bCollapsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidePreviewWindow_MetaData[];
#endif
		static void NewProp_bHidePreviewWindow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePreviewWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowMaskColorsOnPin_MetaData[];
#endif
		static void NewProp_bShowMaskColorsOnPin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMaskColorsOnPin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOutputNameOnPin_MetaData[];
#endif
		static void NewProp_bShowOutputNameOnPin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOutputNameOnPin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleVisible_MetaData[];
#endif
		static void NewProp_bCommentBubbleVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleVisible;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsParameterExpression_MetaData[];
#endif
		static void NewProp_bIsParameterExpression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsParameterExpression;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedToUpdatePreview_MetaData[];
#endif
		static void NewProp_bNeedToUpdatePreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedToUpdatePreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRealtimePreview_MetaData[];
#endif
		static void NewProp_bRealtimePreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRealtimePreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Desc;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialExpressionGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionEditorY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialExpressionEditorY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionEditorX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialExpressionEditorX;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpression_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpression.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "SerializeToFStructuredArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "The expression's outputs, which are set in default properties by derived classes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpression, Outputs), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FExpressionOutput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Localized categories to sort this expression into..." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories = { "MenuCategories", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpression, MenuCategories), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories_Inner = { "MenuCategories", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Whether to draw the expression's outputs." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bShowOutputs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs = { "bShowOutputs", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Whether to draw the expression's inputs." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bShowInputs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs = { "bShowInputs", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Whether the node represents an input to the shader or not.  Used to color the node's background." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bShaderInputData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData = { "bShaderInputData", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, show a collapsed version of the node" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bCollapsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed = { "bCollapsed", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, do not render the preview window for the expression" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bHidePreviewWindow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow = { "bHidePreviewWindow", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, changes the pin color to match the output mask" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bShowMaskColorsOnPin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin = { "bShowMaskColorsOnPin", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, use the output name as the label for the pin" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bShowOutputNameOnPin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin = { "bShowOutputNameOnPin", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, the comment bubble will be visible in the graph editor" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bCommentBubbleVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible = { "bCommentBubbleVisible", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Indicates that this is a 'parameter' type of expression and should always be loaded (ie not cooked away) because we might want the default parameter." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bIsParameterExpression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression = { "bIsParameterExpression", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, we should update the preview next render. This is set when changing bRealtimePreview." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bNeedToUpdatePreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview = { "bNeedToUpdatePreview", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Set to true by RecursiveUpdateRealtimePreview() if the expression's preview needs to be updated in realtime in the material editor." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bRealtimePreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview = { "bRealtimePreview", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Desc_MetaData[] = {
		{ "Category", "MaterialExpression" },
		{ "DisplayAfter", "SortPriority" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "A description that level designers can add (shows in the material editor UI)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpression, Desc), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Desc_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Desc_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Function_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "The material function that this expression is being used with, if any.\nThis will be NULL if the expression belongs to a function that is currently being edited," },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpression, Function), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Function_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "The material that this expression is currently being compiled in.\nThis is not necessarily the object which owns this expression, for example a preview material compiling a material function's expressions." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpression, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Material_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "GUID to uniquely identify this node, to help the tutorials out" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionGuid = { "MaterialExpressionGuid", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpression, MaterialExpressionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_GraphNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Expression's Graph representation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpression, GraphNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_GraphNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_GraphNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorY = { "MaterialExpressionEditorY", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpression, MaterialExpressionEditorY), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorX = { "MaterialExpressionEditorX", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpression, MaterialExpressionEditorX), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorX_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpression_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Desc,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Material,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_GraphNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorX,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpression_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpression>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpression_Statics::ClassParams = {
		&UMaterialExpression::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpression_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpression()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpression_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpression, 442904976);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpression>()
	{
		return UMaterialExpression::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpression(Z_Construct_UClass_UMaterialExpression, &UMaterialExpression::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpression"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpression);
	IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpression)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
