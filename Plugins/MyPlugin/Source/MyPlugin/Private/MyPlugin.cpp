// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

//----------------------------------------------------------------------
// https://www.cnblogs.com/jqm304775992/p/8996470.html
// 创建基于“编辑器Standalone窗口”的插件
// https://zhuanlan.zhihu.com/p/66514192
// （虚幻4Shader篇）开始编写最简单的Shader
//----------------------------------------------------------------------

#include "MyPlugin.h"
#include "MyPluginStyle.h"
#include "MyPluginCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Projects/Public/Interfaces/IPluginManager.h"

static const FName MyPluginTabName("MyPlugin");

#define LOCTEXT_NAMESPACE "FMyPluginModule"

void FMyPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	// 注册编辑器插件风格
	FMyPluginStyle::Initialize();
	FMyPluginStyle::ReloadTextures();

	// 注册编辑器插件命令
	FMyPluginCommands::Register();
	
	// 创建插件编辑器命令
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FMyPluginCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FMyPluginModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		// FExtender用于添加ToolBar或Menu的扩展
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		// WindowLayout命令添加到窗口中
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FMyPluginModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		// 命令添加到ToolBar中
		/* AddToolBarExtension
		第一个参数：是指添加到工具栏的Settings部分；
		第二个参数是在这个部分的位置，前面，后面或第一个；
		第三个参数，是前面创建的命令，传递进去；
		第四个参数，是添加到编辑器的按钮；
		*/
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FMyPluginModule::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
	
	// 注册Tab到FGlobalTabmanager中，后面可以使用InvokeTab获取
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(MyPluginTabName, FOnSpawnTab::CreateRaw(this, &FMyPluginModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FMyPluginTabTitle", "MyPlugin"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

	// 与usf所在路径及Shader实现宏中的虚拟路径对应。PluginShaderDir变量为真实路径，
	// 要增加头文件#include "Projects/Public/Interfaces/IPluginManager.h"
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("MyPlugin"))->GetBaseDir(), TEXT("Shaders"));
	// AddShaderSourceDirectoryMapping，设定一个虚拟路径代表真实路径。
	AddShaderSourceDirectoryMapping(TEXT("/Plugins/MyPlugin"), PluginShaderDir);
}

void FMyPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FMyPluginStyle::Shutdown();

	FMyPluginCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(MyPluginTabName);
}

// 注册Tab，使用Slate布局，并返回SDockTab
TSharedRef<SDockTab> FMyPluginModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FMyPluginModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("MyPlugin.cpp"))
		);

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(WidgetText)
			]
		];
}

void FMyPluginModule::PluginButtonClicked()
{
	// 点击调用
	FGlobalTabmanager::Get()->InvokeTab(MyPluginTabName);
}

void FMyPluginModule::AddMenuExtension(FMenuBuilder& Builder)
{
	// 使用AddMenuEntry加入到Builder中，注释会从Menu中消失
	Builder.AddMenuEntry(FMyPluginCommands::Get().OpenPluginWindow);
}

void FMyPluginModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	// 注册到ToolBar，注册后不显示到ToolBar
	Builder.AddToolBarButton(FMyPluginCommands::Get().OpenPluginWindow);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMyPluginModule, MyPlugin)