// Fill out your copyright notice in the Description page of Project Settings.


#include "ViewerCameraController.h"

// Sets default values
AViewerCameraController::AViewerCameraController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//创建组件
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	OurCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("OurCameraSpringArm"));
	OurCameraSpringArm->SetupAttachment(RootComponent);
	OurCameraSpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
	OurCameraSpringArm->TargetArmLength = 40.f;
	OurCameraSpringArm->bEnableCameraLag = true;
	OurCameraSpringArm->CameraLagSpeed = 3.0f;

	OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("OurCamera"));
	OurCamera->SetupAttachment(OurCameraSpringArm, USpringArmComponent::SocketName);
	OurCamera->bUsePawnControlRotation = false;
	float defaultFOV = OurCamera->FieldOfView;
	OurCamera->FieldOfView = 120.0;

	OurCamera->SetActive(true);

	//控制默认玩家
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	//设置从咱们现实世界的三维空间坐标系到UE坐标系的变换
	//右手到左手
	WorldToUETransformation.SetScale3D(FVector(1, 1, -1));
	FRotator NewRotator(180, 180, 0);
	WorldToUETransformation.SetRotation(NewRotator.Quaternion());
}


CameraState AViewerCameraController::GetUECameraState()
{
	UE_CameraState.Location = OurCamera->GetComponentLocation();
	UE_CameraState.Rotator = OurCamera->GetComponentRotation();

	return UEToWorldTransform(UE_CameraState);
}

void AViewerCameraController::SetUECameraState(CameraState Camera)
{
	//UEToWorldTransform(Camera);

	//UE_CameraState.Location = OurCamera.SETLOCATION;
	//UE_CameraState.Rotator = OurCamera->GetComponentRotation();
}

void AViewerCameraController::InitializeVirtualGlobe()
{
	//创建地球，球体
	//FVector radii = FVector(6378137.0, 6378137.0, 6356752.314245);
	FVector radii = SphereR;
	FRotator InRotation = FRotator(0.0, 0.0, 0.0);
	FVector InTranslation = SphereOrigin;
	FVector InScale3D = FVector(1.0, 1.0, 1.0);

	Sphere_CoordinateSystem earth3d_CoordinateSystem0 = Sphere_CoordinateSystem(radii,
		InRotation,
		InTranslation,
		InScale3D);

	//设置相机初始位置
	//FVector inPt0 = FVector(FMath::DegreesToRadians(114.30), FMath::DegreesToRadians(30.51), 10000.0);

	//FVector outPt0 = earth3d_CoordinateSystem0.ToUE_CoordinateSystem(inPt0);

	//更新相机位置
	//SetActorLocation(outPt0);

	this->UE_CameraState.FOV = 120.0;
	this->UE_CameraState.Location = FVector(-7377577.00, 64382.1289, 64012.9922);
	this->UE_CameraState.Rotator = FRotator(0.0, 0.0, 0.0);
	this->UE_CameraState.screenResolution = FVector2D(1920, 1080);
	this->UE_CameraState.AspectRatio = 2.0;

	//测试基于相机的瓦片调度逻辑
	//this->sccts = SceneCulling_CenterTileStrategy();
	//this->tlm = TileLoadManager();
}


// Called when the game starts or when spawned
void AViewerCameraController::BeginPlay()
{
	Super::BeginPlay();

	//初始化变量
	ScrollWheelSpeed = 1;
	//用于控制平移幅度的比率
	MoveStepFactor = 0.01;

	//球体的原点坐标
	this->SphereOrigin = FVector(0, 0, 0);

	//球体的半径
	this->SphereR = FVector(6378137.0, 6378137.0, 6356752.314245);
	//this->SphereR = FVector(5000.0, 5000.0, 5000.0);
	//this->MaxSphereR = FMath::Max3(SphereR.X, SphereR.Y, SphereR.Z);

	this->MaxSphereR = FMath::Min3(SphereR.X, SphereR.Y, SphereR.Z);

	//地球的初始化
	InitializeVirtualGlobe();

	UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = true;
	
	//获取初始位置
	FVector currentCameraLocation = OurCamera->GetComponentLocation();
	FVector nextCameraShootToOriginVector = SphereOrigin - currentCameraLocation;
	OurCamera->SetRelativeRotation(nextCameraShootToOriginVector.Rotation());
}

// Called every frame
void AViewerCameraController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	//若相机平移标识为true，调用CalcCameraMoveDragDirection完成操作逻辑
	if (IsMoveCameraState)
	{
		CalcCameraMoveDragDirection();
	}

	if (!MovementInput.IsZero())
	{
		MovementInput = MovementInput.GetSafeNormal();
		FVector newLocation = GetActorLocation();
		newLocation += GetActorForwardVector()*MovementInput.X;
		newLocation += GetActorRightVector()*MovementInput.Y;
		//SetActorLocation(newLocation);
	}

}

// Called to bind functionality to input
void AViewerCameraController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	//设置四个键盘按键用于控制精确的平移操作
	/*UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveForward", EKeys::W, 1.0f));
	UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveForward", EKeys::S, -1.0f));
	PlayerInputComponent->BindAxis("MoveForward", this, &AUE_World_Camera::MoveForward);
	UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveRight", EKeys::A, 1.0f));
	UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveRight", EKeys::D, -1.0f));
	PlayerInputComponent->BindAxis("MoveRight", this, &AUE_World_Camera::MoveRight);*/


	//滚轮操作	
	UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("ScrollWheelUp", EKeys::MouseWheelAxis, 1.0f));
	PlayerInputComponent->BindAxis("ScrollWheelUp", this, &AViewerCameraController::OnScrollWheelUpPress);

	//鼠标右键	
	UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MouseRightDrag", EKeys::RightMouseButton, 1.0f));
	PlayerInputComponent->BindAxis("MouseRightDrag", this, &AViewerCameraController::OnMouseRightDrag);

	//键盘leftShift键	
	UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping("KeyLeftShift", EKeys::LeftShift));
	PlayerInputComponent->BindAction("KeyLeftShift", IE_Pressed, this, &AViewerCameraController::OnKeyLeftShiftPressed);
	PlayerInputComponent->BindAction("KeyLeftShift", IE_Released, this, &AViewerCameraController::OnKeyLeftShiftReleased);

	//鼠标位置（X,Y方向）	
	UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("OnTurnRotate", EKeys::MouseX, 1.0f));
	PlayerInputComponent->BindAxis("OnTurnRotate", this, &AViewerCameraController::OnTurnRotate);
	UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("LookAtRotate", EKeys::MouseY, 1.0f));
	PlayerInputComponent->BindAxis("LookAtRotate", this, &AViewerCameraController::OnLookAtRotate);

}


CameraState AViewerCameraController::WorldToUETransform(CameraState Camera)
{
	CameraState NewCamera;
	NewCamera.screenResolution = Camera.screenResolution;
	NewCamera.AspectRatio = Camera.AspectRatio;
	NewCamera.FOV = Camera.FOV;

	NewCamera.Location = WorldToUETransformation.TransformPosition(Camera.Location);
	NewCamera.Rotator = WorldToUETransformation.TransformRotation(Camera.Rotator.Quaternion()).Rotator();

	return NewCamera;
}

CameraState AViewerCameraController::UEToWorldTransform(CameraState Camera)
{
	CameraState NewCamera;
	NewCamera.screenResolution = Camera.screenResolution;
	NewCamera.AspectRatio = Camera.AspectRatio;
	NewCamera.FOV = Camera.FOV;

	NewCamera.Location = WorldToUETransformation.InverseTransformPosition(Camera.Location);
	NewCamera.Rotator = WorldToUETransformation.InverseTransformRotation(Camera.Rotator.Quaternion()).Rotator();

	return NewCamera;
}

// 输入函数
void AViewerCameraController::MoveForward(float AxisValue)
{
	if (FMath::Abs(AxisValue) > KINDA_SMALL_NUMBER)
	{
		MoveDirection = FVector::ZeroVector;
		GetWorld()->GetFirstPlayerController()->GetMousePosition(CursorPos.X, CursorPos.Y);
		UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(GetWorld(), 0), CursorPos, WorldPos, MoveDirection);
		int32 moveStep = WorldPos.Z*MoveStepFactor*-1;
		MovementInput.X = FMath::Clamp<float>(AxisValue*moveStep, -1.0f*moveStep, 1.0f*moveStep);

		MovementInput = MovementInput.GetSafeNormal();
		FVector newLocation = GetActorLocation();
		newLocation += GetActorForwardVector()*MovementInput.X;
		SetActorLocation(newLocation);
	}
}

void AViewerCameraController::MoveRight(float AxisValue)
{
	if (FMath::Abs(AxisValue) > KINDA_SMALL_NUMBER)
	{
		MoveDirection = FVector::ZeroVector;
		GetWorld()->GetFirstPlayerController()->GetMousePosition(CursorPos.X, CursorPos.Y);
		UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(GetWorld(), 0), CursorPos, WorldPos, MoveDirection);
		int32 moveStep = WorldPos.Z*MoveStepFactor*-1;

		MovementInput.Y = FMath::Clamp<float>(AxisValue*moveStep, -1.0f*moveStep, 1.0f*moveStep);

		MovementInput = MovementInput.GetSafeNormal();
		FVector newLocation = GetActorLocation();
		newLocation += GetActorRightVector()*MovementInput.Y;
		SetActorLocation(newLocation);
	}
}





//键盘shift左键的按下操作响应函数
void AViewerCameraController::OnKeyLeftShiftPressed()
{
	IsBindShiftKey = true;
	//GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::White, "key left shift pressed");
}

//键盘shift左键的抬起操作响应函数
void AViewerCameraController::OnKeyLeftShiftReleased()
{
	IsBindShiftKey = false;
	//GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::White, "key left shift released");
}


//滚动滑轮的事件响应函数
//用于操纵当前玩家的相机视野
//蒯希，20200410
void AViewerCameraController::OnScrollWheelUpPress(float axisValue)
{
	MoveDirection = FVector::ZeroVector;
	if (FMath::Abs(axisValue) > KINDA_SMALL_NUMBER)
	{
		GetWorld()->GetFirstPlayerController()->GetMousePosition(CursorPos.X, CursorPos.Y);
		UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(GetWorld(), 0), CursorPos, WorldPos, MoveDirection);

		//根据当前控制器的实际高度，确定相机移动的实际步长(ScrollWheelSpeed)，原始移动步长(axisValue)为“1”
		//目前逻辑为实际高度的10%作为步长，以放大视角操作为例，每次递进现有高度的10%，相机更新后的位置为原来高度的90%
		//（蒯希，20191225）

		//默认滚轮放大，根据距离球面的距离，单次缩放距离逐渐缩小
		float stepRadio = 0.05;

		/*if (axisValue < 0)
			stepRadio = 1.05;*/

		float cameraHeight = FVector::Dist(WorldPos, SphereOrigin) - MaxSphereR;
		ScrollWheelSpeed = cameraHeight * stepRadio;
		OurCamera->AddWorldOffset(MoveDirection*ScrollWheelSpeed*axisValue);

		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::SanitizeFloat(cameraHeight));
	}

}

//鼠标右键的拖拽事件响应函数
//只是做逻辑判断，设置当前的操作标识，具体操作在CalcCameraOnTurn函数中完成
//蒯希20191225
void AViewerCameraController::OnMouseRightDrag(float axisValue)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::SanitizeFloat(axisValue));
	if (FMath::Abs(axisValue) < KINDA_SMALL_NUMBER)
	{
		CurrentCursorPos = PreviousCursorPos = FVector2D::ZeroVector;
		IsRotateCameraState = false;
		IsMoveCameraState = false;
	}
	else
	{
		//按下左shift键，绕鼠标点旋转		
		if (IsBindShiftKey)
		{
			//拖拽状态			
			IsMoveCameraState = false;
			IsRotateCameraState = true;
		}
		//没有按下左Shift键时候，开始拖拽		
		else
		{
			IsRotateCameraState = false;
			IsMoveCameraState = true;
		}
	}
}

//具体相机平移操作逻辑的实现函数
//蒯希20191225
void AViewerCameraController::CalcCameraMoveDragDirection()
{
	if (FMath::Abs(FVector2D::Distance(PreviousCursorPos, CurrentCursorPos)) < KINDA_SMALL_NUMBER)
	{
		GetWorld()->GetFirstPlayerController()->GetMousePosition(PreviousCursorPos.X, PreviousCursorPos.Y);
	}
	else
	{
		//1.获取相机当前在ue坐标系中的位置，并计算其在经纬度椭球上的坐标，及高度
		//FVector currentCameraLocation = GetActorLocation();
		FVector currentCameraLocation = OurCamera->GetComponentLocation();
		FVector currentCameraLocationInGlobe = this->geoCoordinateSystem->ToGeoCoordinateSystem(currentCameraLocation);
		//2.根据当前相机在经纬度椭球中的高度，计算单个像素对应的经纬度长度

		SceneCulling_CenterTileStrategy* pSceneCulling_CenterTileStrategy = (SceneCulling_CenterTileStrategy*)this->pISceneCulling;
		if (pSceneCulling_CenterTileStrategy)
		{
			this->degreePerPixelInScreen = pSceneCulling_CenterTileStrategy->GetDegreePerPixelInScreen(111318, 256);
		}
		float degreePerPixel = this->degreePerPixelInScreen;

		if (degreePerPixel == 0)
			return;

		//3.获取当前鼠标位置，与之前记录的鼠标位置做差，得到在屏幕上的鼠标位移
		GetWorld()->GetFirstPlayerController()->GetMousePosition(CurrentCursorPos.X, CurrentCursorPos.Y);
		FVector2D MoveOffset = CurrentCursorPos - PreviousCursorPos;
				
		PreviousCursorPos = CurrentCursorPos;

		if(MoveOffset.X > 10)
			PreviousCursorPos = CurrentCursorPos;

		float moveSpeed = 0.05;

		//4.计算屏幕上的鼠标位移对应的经纬度位移
		FVector MoveOffsetInGlobe = FVector(-1.0*MoveOffset.X*degreePerPixel*moveSpeed, MoveOffset.Y*degreePerPixel*moveSpeed, 0);

		//5.计算最终的鼠标经纬度位置，并根据该位置反算UE中的坐标，将相机平移到该位置
		currentCameraLocationInGlobe = currentCameraLocationInGlobe.operator+(MoveOffsetInGlobe);
		//currentCameraLocation = currentCameraLocation.operator+(MoveOffsetInGlobe);
		FVector nextCameraLocation = this->geoCoordinateSystem->FromGeoCoordinateSystem(currentCameraLocationInGlobe);
		//SetActorLocation(nextCameraLocation);
		OurCamera->SetWorldLocation(nextCameraLocation);

		//6.根据相机新的位置，计算相机位置到ue椭球原点的方向向量，通过该向量设置相机的偏转角度
		FVector nextCameraShootToOriginVector = SphereOrigin - nextCameraLocation;
		OurCamera->SetRelativeRotation(nextCameraShootToOriginVector.Rotation());

		//FString Message1 = "X = " + FString::SanitizeFloat(currentCameraLocation.X) + "; Y = " + FString::SanitizeFloat(currentCameraLocation.Y) + "; Z = " + FString::SanitizeFloat(currentCameraLocation.Z);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, Message1);
		//FString Message2 = "Roll = " + FString::SanitizeFloat(OurCamera->RelativeRotation.Roll) + "; Pitch = " + FString::SanitizeFloat(OurCamera->RelativeRotation.Pitch) + "; Yaw = " + FString::SanitizeFloat(OurCamera->RelativeRotation.Yaw);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, Message2);
	}
}


//默认的鼠标右键调整视角逻辑，根据mouseX的值,沿Z轴旋转，即偏航角的变化
void AViewerCameraController::OnTurnRotate(float axisValue)
{
	if (!IsRotateCameraState) return;
	if (IsRotateCameraState&&FMath::Abs(axisValue) > KINDA_SMALL_NUMBER)
	{
		FRotator NewRotationYaw = GetActorRotation();
		NewRotationYaw.Yaw += axisValue;
		SetActorRotation(NewRotationYaw);
	}
}

//默认的鼠标右键调整视角逻辑，根据mouseY的值，沿Y轴旋转，即俯仰角的变化
//目前设置俯仰角的变化范围为-90 到-15，即垂直往下看到斜视地面15度的角度来看的范围，后续根据实际需要再调整
//蒯希20191225
void AViewerCameraController::OnLookAtRotate(float axisValue)
{
	if (!IsRotateCameraState) return;
	if (IsRotateCameraState && FMath::Abs(axisValue) > KINDA_SMALL_NUMBER)
	{
		FRotator NewRotationPitch = OurCameraSpringArm->GetComponentRotation();
		NewRotationPitch.Pitch = FMath::Clamp(NewRotationPitch.Pitch + axisValue, -90.0f, -15.0f);
		OurCameraSpringArm->SetWorldRotation(NewRotationPitch);
	}
}
