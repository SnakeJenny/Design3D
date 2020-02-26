// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/EdGraphNode_Comment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_Comment() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ECommentBoxMode();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UEdGraphNode_Comment_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdGraphNode_Comment();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* ECommentBoxMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ECommentBoxMode, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ECommentBoxMode"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ECommentBoxMode::Type>()
	{
		return ECommentBoxMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECommentBoxMode(ECommentBoxMode_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ECommentBoxMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ECommentBoxMode_Hash() { return 843037616U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ECommentBoxMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECommentBoxMode"), 0, Get_Z_Construct_UEnum_UnrealEd_ECommentBoxMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECommentBoxMode::GroupMovement", (int64)ECommentBoxMode::GroupMovement },
				{ "ECommentBoxMode::NoGroupMovement", (int64)ECommentBoxMode::NoGroupMovement },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "GroupMovement.DisplayName", "Group Movement" },
				{ "GroupMovement.ToolTip", "This comment box will move any fully contained nodes when it moves." },
				{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
				{ "NoGroupMovement.DisplayName", "Comment" },
				{ "NoGroupMovement.ToolTip", "This comment box has no effect on nodes contained inside it." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ECommentBoxMode",
				"ECommentBoxMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEdGraphNode_Comment::StaticRegisterNativesUEdGraphNode_Comment()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphNode_Comment_NoRegister()
	{
		return UEdGraphNode_Comment::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_Comment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CommentDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bColorCommentBubble_MetaData[];
#endif
		static void NewProp_bColorCommentBubble_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bColorCommentBubble;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData[];
#endif
		static void NewProp_bCommentBubbleVisible_InDetailsPanel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleVisible_InDetailsPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommentColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_Comment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraphNode_Comment.h" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentDepth_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ToolTip", "comment Depth" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentDepth = { "CommentDepth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_Comment, CommentDepth), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentDepth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_MoveMode_MetaData[] = {
		{ "Category", "Comment" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ToolTip", "Whether the comment should move any fully enclosed nodes around when it is moved" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_MoveMode = { "MoveMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_Comment, MoveMode), Z_Construct_UEnum_UnrealEd_ECommentBoxMode, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_MoveMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_MoveMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble_MetaData[] = {
		{ "Category", "Comment" },
		{ "DisplayName", "Color Bubble" },
		{ "EditCondition", "bCommentBubbleVisible_InDetailsPanel" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ToolTip", "Whether to use Comment Color to color the background of the comment bubble shown when zoomed out." },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble_SetBit(void* Obj)
	{
		((UEdGraphNode_Comment*)Obj)->bColorCommentBubble = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble = { "bColorCommentBubble", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphNode_Comment), &Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData[] = {
		{ "Category", "Comment" },
		{ "DisplayName", "Show Bubble When Zoomed" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ToolTip", "Whether to show a zoom-invariant comment bubble when zoomed out (making the comment readable at any distance)." },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_SetBit(void* Obj)
	{
		((UEdGraphNode_Comment*)Obj)->bCommentBubbleVisible_InDetailsPanel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel = { "bCommentBubbleVisible_InDetailsPanel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphNode_Comment), &Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "Comment" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ToolTip", "Size of the text in the comment box" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_Comment, FontSize), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_FontSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_FontSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentColor_MetaData[] = {
		{ "Category", "Comment" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ToolTip", "Color to style comment with" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentColor = { "CommentColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_Comment, CommentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_Comment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_MoveMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_FontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_Comment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_Comment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::ClassParams = {
		&UEdGraphNode_Comment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphNode_Comment_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode_Comment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdGraphNode_Comment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdGraphNode_Comment, 290949211);
	template<> UNREALED_API UClass* StaticClass<UEdGraphNode_Comment>()
	{
		return UEdGraphNode_Comment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphNode_Comment(Z_Construct_UClass_UEdGraphNode_Comment, &UEdGraphNode_Comment::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEdGraphNode_Comment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_Comment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
