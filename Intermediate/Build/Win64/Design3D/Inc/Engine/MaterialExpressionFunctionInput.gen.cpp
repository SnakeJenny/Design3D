// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFunctionInput() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFunctionInputType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EFunctionInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFunctionInputType, Z_Construct_UPackage__Script_Engine(), TEXT("EFunctionInputType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFunctionInputType>()
	{
		return EFunctionInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFunctionInputType(EFunctionInputType_StaticEnum, TEXT("/Script/Engine"), TEXT("EFunctionInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EFunctionInputType_Hash() { return 1314659286U; }
	UEnum* Z_Construct_UEnum_Engine_EFunctionInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFunctionInputType"), 0, Get_Z_Construct_UEnum_Engine_EFunctionInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FunctionInput_Scalar", (int64)FunctionInput_Scalar },
				{ "FunctionInput_Vector2", (int64)FunctionInput_Vector2 },
				{ "FunctionInput_Vector3", (int64)FunctionInput_Vector3 },
				{ "FunctionInput_Vector4", (int64)FunctionInput_Vector4 },
				{ "FunctionInput_Texture2D", (int64)FunctionInput_Texture2D },
				{ "FunctionInput_TextureCube", (int64)FunctionInput_TextureCube },
				{ "FunctionInput_VolumeTexture", (int64)FunctionInput_VolumeTexture },
				{ "FunctionInput_StaticBool", (int64)FunctionInput_StaticBool },
				{ "FunctionInput_MaterialAttributes", (int64)FunctionInput_MaterialAttributes },
				{ "FunctionInput_TextureExternal", (int64)FunctionInput_TextureExternal },
				{ "FunctionInput_MAX", (int64)FunctionInput_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
				{ "ToolTip", "Supported input types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EFunctionInputType",
				"EFunctionInputType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionFunctionInput::StaticRegisterNativesUMaterialExpressionFunctionInput()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister()
	{
		return UMaterialExpressionFunctionInput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompilingFunctionPreview_MetaData[];
#endif
		static void NewProp_bCompilingFunctionPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompilingFunctionPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePreviewValueAsDefault_MetaData[];
#endif
		static void NewProp_bUsePreviewValueAsDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePreviewValueAsDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preview;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFunctionInput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "true when this expression is being compiled in a function preview,\nfalse when this expression is being compiled into a material that uses the function.\nOnly valid in Compile()" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview_SetBit(void* Obj)
	{
		((UMaterialExpressionFunctionInput*)Obj)->bCompilingFunctionPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview = { "bCompilingFunctionPreview", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionFunctionInput), &Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_SortPriority_MetaData[] = {
		{ "Category", "MaterialExpression" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Controls where the input is displayed relative to the other inputs." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, SortPriority), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_SortPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_SortPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Whether to use the preview value or texture as the default value for this input." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault_SetBit(void* Obj)
	{
		((UMaterialExpressionFunctionInput*)Obj)->bUsePreviewValueAsDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault = { "bUsePreviewValueAsDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionFunctionInput), &Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_PreviewValue_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "OverridingInputProperty", "Preview" },
		{ "ToolTip", "Value used to preview this input when editing the material function." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_PreviewValue = { "PreviewValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, PreviewValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_PreviewValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_PreviewValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputType_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Type of this input.\nInput code chunks will be cast to this type, and a compiler error will be emitted if the cast fails." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, InputType), Z_Construct_UEnum_Engine_EFunctionInputType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Id of this input, used to maintain references through name changes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Id_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "The input's description, which will be used as a tooltip on the connector in function call expressions that use this function." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, Description), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "The input's name, which will be drawn on the connector in function call expressions that use this function." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, InputName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Used for previewing when editing the function, or when bUsePreviewValueAsDefault is enabled." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, Preview), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Preview_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Preview_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_SortPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_PreviewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Preview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFunctionInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::ClassParams = {
		&UMaterialExpressionFunctionInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionFunctionInput, 2134924037);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFunctionInput>()
	{
		return UMaterialExpressionFunctionInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionFunctionInput(Z_Construct_UClass_UMaterialExpressionFunctionInput, &UMaterialExpressionFunctionInput::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionFunctionInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFunctionInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
