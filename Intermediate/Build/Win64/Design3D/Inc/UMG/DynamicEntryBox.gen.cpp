// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/DynamicEntryBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicEntryBox() {}
// Cross Module References
	UMG_API UEnum* Z_Construct_UEnum_UMG_EDynamicBoxType();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UFunction* Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UFunction* Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries();
	UMG_API UFunction* Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries();
	UMG_API UFunction* Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry();
	UMG_API UFunction* Z_Construct_UFunction_UDynamicEntryBox_Reset();
	UMG_API UFunction* Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
// End Cross Module References
	static UEnum* EDynamicBoxType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EDynamicBoxType, Z_Construct_UPackage__Script_UMG(), TEXT("EDynamicBoxType"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<EDynamicBoxType>()
	{
		return EDynamicBoxType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDynamicBoxType(EDynamicBoxType_StaticEnum, TEXT("/Script/UMG"), TEXT("EDynamicBoxType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EDynamicBoxType_Hash() { return 1189576477U; }
	UEnum* Z_Construct_UEnum_UMG_EDynamicBoxType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDynamicBoxType"), 0, Get_Z_Construct_UEnum_UMG_EDynamicBoxType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDynamicBoxType::Horizontal", (int64)EDynamicBoxType::Horizontal },
				{ "EDynamicBoxType::Vertical", (int64)EDynamicBoxType::Vertical },
				{ "EDynamicBoxType::Wrap", (int64)EDynamicBoxType::Wrap },
				{ "EDynamicBoxType::Overlay", (int64)EDynamicBoxType::Overlay },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"EDynamicBoxType",
				"EDynamicBoxType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UDynamicEntryBox::StaticRegisterNativesUDynamicEntryBox()
	{
		UClass* Class = UDynamicEntryBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_CreateEntry", &UDynamicEntryBox::execBP_CreateEntry },
			{ "BP_CreateEntryOfClass", &UDynamicEntryBox::execBP_CreateEntryOfClass },
			{ "GetAllEntries", &UDynamicEntryBox::execGetAllEntries },
			{ "GetNumEntries", &UDynamicEntryBox::execGetNumEntries },
			{ "RemoveEntry", &UDynamicEntryBox::execRemoveEntry },
			{ "Reset", &UDynamicEntryBox::execReset },
			{ "SetEntrySpacing", &UDynamicEntryBox::execSetEntrySpacing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics
	{
		struct DynamicEntryBox_eventBP_CreateEntry_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBox_eventBP_CreateEntry_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicEntryBox" },
		{ "DisplayName", "Create Entry" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "Creates and establishes a new dynamic entry in the box" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "BP_CreateEntry", sizeof(DynamicEntryBox_eventBP_CreateEntry_Parms), Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics
	{
		struct DynamicEntryBox_eventBP_CreateEntryOfClass_Parms
		{
			TSubclassOf<UUserWidget>  EntryClass;
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EntryClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBox_eventBP_CreateEntryOfClass_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_EntryClass = { "EntryClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBox_eventBP_CreateEntryOfClass_Parms, EntryClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_EntryClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicEntryBox" },
		{ "DisplayName", "Create Entry of Class" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "Creates and establishes a new dynamic entry in the box using the specified class instead of the default." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "BP_CreateEntryOfClass", sizeof(DynamicEntryBox_eventBP_CreateEntryOfClass_Parms), Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics
	{
		struct DynamicEntryBox_eventGetAllEntries_Parms
		{
			TArray<UUserWidget*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBox_eventGetAllEntries_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "GetAllEntries", sizeof(DynamicEntryBox_eventGetAllEntries_Parms), Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries_Statics
	{
		struct DynamicEntryBox_eventGetNumEntries_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBox_eventGetNumEntries_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "GetNumEntries", sizeof(DynamicEntryBox_eventGetNumEntries_Parms), Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics
	{
		struct DynamicEntryBox_eventRemoveEntry_Parms
		{
			UUserWidget* EntryWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntryWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::NewProp_EntryWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::NewProp_EntryWidget = { "EntryWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBox_eventRemoveEntry_Parms, EntryWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::NewProp_EntryWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::NewProp_EntryWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::NewProp_EntryWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "RemoveEntry", sizeof(DynamicEntryBox_eventRemoveEntry_Parms), Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics
	{
		struct DynamicEntryBox_eventReset_Parms
		{
			bool bDeleteWidgets;
		};
		static void NewProp_bDeleteWidgets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteWidgets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::NewProp_bDeleteWidgets_SetBit(void* Obj)
	{
		((DynamicEntryBox_eventReset_Parms*)Obj)->bDeleteWidgets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::NewProp_bDeleteWidgets = { "bDeleteWidgets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DynamicEntryBox_eventReset_Parms), &Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::NewProp_bDeleteWidgets_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::NewProp_bDeleteWidgets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "CPP_Default_bDeleteWidgets", "false" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "Clear out the box entries, optionally deleting the underlying Slate widgets entirely as well." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "Reset", sizeof(DynamicEntryBox_eventReset_Parms), Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBox_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics
	{
		struct DynamicEntryBox_eventSetEntrySpacing_Parms
		{
			FVector2D InEntrySpacing;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEntrySpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEntrySpacing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::NewProp_InEntrySpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::NewProp_InEntrySpacing = { "InEntrySpacing", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DynamicEntryBox_eventSetEntrySpacing_Parms, InEntrySpacing), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::NewProp_InEntrySpacing_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::NewProp_InEntrySpacing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::NewProp_InEntrySpacing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "SetEntrySpacing", sizeof(DynamicEntryBox_eventSetEntrySpacing_Parms), Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister()
	{
		return UDynamicEntryBox::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicEntryBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EntryWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxElementSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxElementSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryVerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntryVerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryHorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntryHorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntrySizeRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntrySizeRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpacingPattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpacingPattern;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpacingPattern_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntrySpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntrySpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryBoxType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EntryBoxType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntryBoxType_Underlying;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDesignerPreviewEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDesignerPreviewEntries;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicEntryBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicEntryBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry, "BP_CreateEntry" }, // 520815136
		{ &Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass, "BP_CreateEntryOfClass" }, // 3459636185
		{ &Z_Construct_UFunction_UDynamicEntryBox_GetAllEntries, "GetAllEntries" }, // 1353059371
		{ &Z_Construct_UFunction_UDynamicEntryBox_GetNumEntries, "GetNumEntries" }, // 3075294637
		{ &Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry, "RemoveEntry" }, // 1017497337
		{ &Z_Construct_UFunction_UDynamicEntryBox_Reset, "Reset" }, // 1032641588
		{ &Z_Construct_UFunction_UDynamicEntryBox_SetEntrySpacing, "SetEntrySpacing" }, // 3105969360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/DynamicEntryBox.h" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A special box panel that auto-generates its entries at both design-time and runtime.\nUseful for cases where you can have a varying number of entries, but it isn't worth the effort or conceptual overhead to set up a list/tile view.\nNote that entries here are *not* virtualized as they are in the list views, so generally this should be avoided if you intend to scroll through lots of items.\n\nNo children can be manually added in the designer - all are auto-generated based on the given entry class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EntryLayout" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "The class of widget to create entries of.\nIf natively binding this widget, use the EntryClass UPROPERTY metadata to specify the desired entry widget base class." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryWidgetClass = { "EntryWidgetClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBox, EntryWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_MaxElementSize_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "The maximum size of each entry in the dominant axis of the box. Vertical/Horizontal boxes only." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_MaxElementSize = { "MaxElementSize", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBox, MaxElementSize), METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_MaxElementSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_MaxElementSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryVerticalAlignment_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "Vertical alignment of generated entries. Horizontal/Vertical/Wrap boxes only." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryVerticalAlignment = { "EntryVerticalAlignment", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBox, EntryVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryVerticalAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryVerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryHorizontalAlignment_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "Horizontal alignment of generated entries. Horizontal/Vertical/Wrap boxes only." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryHorizontalAlignment = { "EntryHorizontalAlignment", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBox, EntryHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryHorizontalAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryHorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntrySizeRule_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "Sizing rule to apply to generated entries. Horizontal/Vertical boxes only." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntrySizeRule = { "EntrySizeRule", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBox, EntrySizeRule), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntrySizeRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntrySizeRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_SpacingPattern_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "The looping sequence of entry paddings to apply as entries are created. Overlay boxes only. Ignores EntrySpacing if not empty." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_SpacingPattern = { "SpacingPattern", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBox, SpacingPattern), METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_SpacingPattern_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_SpacingPattern_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_SpacingPattern_Inner = { "SpacingPattern", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntrySpacing_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "The padding to apply between entries in the box.\nNote horizontal boxes only use the X and vertical boxes only use Y. Value is also ignored for the first entry in the box.\nWrap and Overlay types use both X and Y for spacing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntrySpacing = { "EntrySpacing", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBox, EntrySpacing), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntrySpacing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntrySpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryBoxType_MetaData[] = {
		{ "Category", "DynamicEntryBox" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "The type of box panel into which created entries are added. Some differences in functionality exist between each type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryBoxType = { "EntryBoxType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBox, EntryBoxType), Z_Construct_UEnum_UMG_EDynamicBoxType, METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryBoxType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryBoxType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryBoxType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_NumDesignerPreviewEntries_MetaData[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_NumDesignerPreviewEntries = { "NumDesignerPreviewEntries", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicEntryBox, NumDesignerPreviewEntries), METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_NumDesignerPreviewEntries_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_NumDesignerPreviewEntries_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicEntryBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_MaxElementSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryVerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryHorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntrySizeRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_SpacingPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_SpacingPattern_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntrySpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryBoxType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryBoxType_Underlying,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_NumDesignerPreviewEntries,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicEntryBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicEntryBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamicEntryBox_Statics::ClassParams = {
		&UDynamicEntryBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDynamicEntryBox_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicEntryBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicEntryBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamicEntryBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicEntryBox, 3620156891);
	template<> UMG_API UClass* StaticClass<UDynamicEntryBox>()
	{
		return UDynamicEntryBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicEntryBox(Z_Construct_UClass_UDynamicEntryBox, &UDynamicEntryBox::StaticClass, TEXT("/Script/UMG"), TEXT("UDynamicEntryBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicEntryBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
