// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Design3D : ModuleRules
{
	public Design3D(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        // 将plugins下的插件添加到项目中
        PublicDependencyModuleNames.AddRange(new string[] {"MyPlugin", "RuntimeMeshComponent" });
        //PublicDependencyModuleNames.AddRange(new string[] { "ShaderCore", "RenderCore", "RHI" });


        PrivateDependencyModuleNames.AddRange(new string[] {  });

  
        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
