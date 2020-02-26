// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerCameraManager.h"
#include "MyCharacter.h"

void AMyPlayerCameraManager::UpdateViewTarget(FTViewTarget& OutVT, float DeltaTime)
{
	/*if ((PendingViewTarget.Target != NULL) && BlendParams.bLockOutgoing && OutVT.Equal(ViewTarget))
	{
		return;
	}

	FMinimalViewInfo OrigPOV = OutVT.POV;
	OutVT.POV.FOV = DefaultFOV;
	OutVT.POV.OrthoWidth = DefaultOrthoWidth;
	OutVT.POV.bConstrainAspectRatio = false;
	OutVT.POV.ProjectionMode = this->bIsOrthographic ? ECameraProjectionMode::Orthographic : ECameraProjectionMode::Perspective;
	OutVT.POV.PostProcessBlendWeight = 1.0f;
	bool bDoNotApplyModifiers = false;

	ABZGame_PlayerController* BZGame_Controller = Cast<ABZGame_PlayerController>(GetOwningPlayerController());
	if (BZGame_Controller != NULL)
	{
		UCameraComponent* ViewCam = BZGame_Controller->GetViewCamera();
		OutVT.POV.Location = ViewCam->GetComponentLocation();
		OutVT.POV.Rotation = ViewCam->GetComponentRotation();
		OutVT.POV.FOV = ViewCam->FieldOfView;
		OutVT.POV.AspectRatio = ViewCam->AspectRatio;
		OutVT.POV.bConstrainAspectRatio = ViewCam->bConstrainAspectRatio;
		OutVT.POV.ProjectionMode = ViewCam->ProjectionMode;
		OutVT.POV.OrthoWidth = ViewCam->OrthoWidth;
		OutVT.POV.PostProcessBlendWeight = ViewCam->PostProcessBlendWeight;

		if (BZGame_Controller->GetViewCamera()->PostProcessBlendWeight > 0.0f)
		{
			OutVT.POV.PostProcessSettings = ViewCam->PostProcessSettings;
		}

		if (!bDoNotApplyModifiers || this->bAlwaysApplyModifiers)
		{
			ApplyCameraModifiers(DeltaTime, OutVT.POV);
		}

		SetActorLocationAndRotation(OutVT.POV.Location, OutVT.POV.Rotation, false);
		UpdateCameraLensEffects(OutVT);
	}
	else
	{
		Super::UpdateViewTarget(OutVT, DeltaTime);
	}*/
	//if (bFollowHmdOrientation)
	//{
	//	//如果有VR设备就直接运行引擎原始函数
	//	Super::UpdateViewTarget(OutVT, DeltaTime);
	//	return;
	//}
	//// Don't update outgoing viewtarget during an interpolation
	//if ((PendingViewTarget.Target != NULL) && BlendParams.bLockOutgoing && OutVT.Equal(ViewTarget))
	//{
	//	return;
	//}
	//bool bDoNotApplyModifiers = false;

	//if (ACameraActor* CamActor = Cast<ACameraActor>(OutVT.Target))
	//{
	//	// Viewing through a camera actor.
	//	CamActor->GetCameraComponent()->GetCameraView(DeltaTime, OutVT.POV);
	//}
	//else
	//{
	//	if (CameraStyle == FName("SceneFixed"))
	//	{　　　　　　　//这里我感觉可能用PendingViewTarget来传递摄像机坐标和旋转比较好，但是还没测试过
	//		//自己定义一个场景固定视角
	//		ADemoCharacter *Character = Cast<ADemoCharacter>(GetOwningPlayerController()->GetPawn());
	//		OutVT.POV.Location = Character->ViewTargetLocation;
	//		OutVT.POV.Rotation = Character->ViewTargetRotator;
	//		//DesiredView.FOV = FieldOfView;
	//		//DesiredView.AspectRatio = AspectRatio;
	//		// don't apply modifiers when using this debug camera mode
	//		bDoNotApplyModifiers = true;
	//	}
	//	else if (CameraStyle == FName("Default"))
	//	{
	//		//默认方式是直接取得摄像机的参数来设置FTViewTarget.pov,而摄像机被控制类、SpringArm控制。
	//		UpdateViewTargetInternal(OutVT, DeltaTime);
	//	}
	//	else
	//	{
	//		Super::UpdateViewTarget(OutVT, DeltaTime);
	//	}
	//}
	//if (!bDoNotApplyModifiers || bAlwaysApplyModifiers)
	//{
	//	// Apply camera modifiers at the end (view shakes for example)
	//	ApplyCameraModifiers(DeltaTime, OutVT.POV);
	//}
	//// Synchronize the actor with the view target results
	//SetActorLocationAndRotation(OutVT.POV.Location, OutVT.POV.Rotation, false);
	//UpdateCameraLensEffects(OutVT);
}