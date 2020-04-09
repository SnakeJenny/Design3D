// Fill out your copyright notice in the Description page of Project Settings.


#include "UE_World_Camera.h"

// Sets default values
AUE_World_Camera::AUE_World_Camera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//创建组件
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	OurCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("OurCameraSpringArm"));
	OurCameraSpringArm->SetupAttachment(RootComponent);
	OurCameraSpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), FRotator(-90.0f, 0.0f, 0.0f));
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

}

// Called when the game starts or when spawned
void AUE_World_Camera::BeginPlay()
{
	Super::BeginPlay();

	//初始化变量
	ScrollWheelSpeed = 1;
	//用于控制平移幅度的比率
	MoveStepFactor = 0.01;
	
}

// Called every frame
void AUE_World_Camera::Tick(float DeltaTime)
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
		SetActorLocation(newLocation);
	}

}

// Called to bind functionality to input
void AUE_World_Camera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//设置四个键盘按键用于控制精确的平移操作
	//UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveForward", EKeys::W, 1.0f));
	//UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveForward", EKeys::S, -1.0f));
	//PlayerInputComponent->BindAxis("MoveForward", this, &APawnWithCamera::MoveForward);

	//UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveRight", EKeys::A, 1.0f));
	//UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MoveRight", EKeys::D, -1.0f));
	//PlayerInputComponent->BindAxis("MoveRight", this, &APawnWithCamera::MoveRight);


	//滚轮操作	
	UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("ScrollWheelUp", EKeys::MouseWheelAxis, 1.0f));
	PlayerInputComponent->BindAxis("ScrollWheelUp", this, &AUE_World_Camera::OnScrollWheelUpPress);

	//鼠标右键	
	UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("MouseRightDrag", EKeys::RightMouseButton, 1.0f));
	PlayerInputComponent->BindAxis("MouseRightDrag", this, &AUE_World_Camera::OnMouseRightDrag);

	//键盘leftShift键	
	UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping("KeyLeftShift", EKeys::LeftShift));
	PlayerInputComponent->BindAction("KeyLeftShift", IE_Pressed, this, &AUE_World_Camera::OnKeyLeftShiftPressed);
	PlayerInputComponent->BindAction("KeyLeftShift", IE_Released, this, &AUE_World_Camera::OnKeyLeftShiftReleased);

	//鼠标位置（X,Y方向）	
	UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("OnTurnRotate", EKeys::MouseX, 1.0f));
	PlayerInputComponent->BindAxis("OnTurnRotate", this, &AUE_World_Camera::OnTurnRotate);
	UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping("LookAtRotate", EKeys::MouseY, 1.0f));
	PlayerInputComponent->BindAxis("LookAtRotate", this, &AUE_World_Camera::OnLookAtRotate);

}

// 输入函数
void AUE_World_Camera::MoveForward(float AxisValue)
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

void AUE_World_Camera::MoveRight(float AxisValue)
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
void AUE_World_Camera::OnKeyLeftShiftPressed()
{
	IsBindShiftKey = true;
	//GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::White, "key left shift pressed");
}

//键盘shift左键的抬起操作响应函数
void AUE_World_Camera::OnKeyLeftShiftReleased()
{
	IsBindShiftKey = false;
	//GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::White, "key left shift released");
}


//滚动滑轮的事件响应函数
//用于操纵当前玩家的相机视野
//蒯希，20191225
void AUE_World_Camera::OnScrollWheelUpPress(float axisValue)
{
	MoveDirection = FVector::ZeroVector;
	if (FMath::Abs(axisValue) > KINDA_SMALL_NUMBER)
	{
		GetWorld()->GetFirstPlayerController()->GetMousePosition(CursorPos.X, CursorPos.Y);
		UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(GetWorld(), 0), CursorPos, WorldPos, MoveDirection);
	}
	//根据当前控制器的实际高度，确定相机移动的实际步长(ScrollWheelSpeed)，原始移动步长(axisValue)为“1”
	//目前逻辑为实际高度的10%作为步长，以放大视角操作为例，每次递进现有高度的10%，相机更新后的位置为原来高度的90%
	//由于axisVaule不知为何每次两个单位，因此此处取0.05（蒯希，20191225）
	ScrollWheelSpeed = WorldPos.Z*0.05;
	OurCamera->AddWorldOffset(MoveDirection*ScrollWheelSpeed*axisValue);
}

//鼠标右键的拖拽事件响应函数
//只是做逻辑判断，设置当前的操作标识，具体操作在CalcCameraOnTurn函数中完成
//蒯希20191225
void AUE_World_Camera::OnMouseRightDrag(float axisValue)
{
	if (FMath::Abs(axisValue) < KINDA_SMALL_NUMBER)
	{
		CurrentCursorPos = PreviousCursorPos = FVector2D::ZeroVector;
		IsRotateCameraState = false;
		IsMoveCameraState = false;
	}
	else
	{
		//按下左shift键，开始拖拽		
		if (IsBindShiftKey)
		{
			//拖拽状态			
			IsMoveCameraState = true;
			IsRotateCameraState = false;
		}
		//没有按下左Shift键时候绕鼠标点旋转		
		else
		{
			IsRotateCameraState = true;
			IsMoveCameraState = false;
		}
	}
}




//具体相机平移操作逻辑的实现函数
//蒯希20191225
void AUE_World_Camera::CalcCameraMoveDragDirection()
{
	if (FMath::Abs(FVector2D::Distance(PreviousCursorPos, CurrentCursorPos)) < KINDA_SMALL_NUMBER)
	{
		GetWorld()->GetFirstPlayerController()->GetMousePosition(PreviousCursorPos.X, PreviousCursorPos.Y);
	}
	else
	{
		GetWorld()->GetFirstPlayerController()->GetMousePosition(CurrentCursorPos.X, CurrentCursorPos.Y);
		FVector2D MoveOffset = CurrentCursorPos - PreviousCursorPos;
		PreviousCursorPos = CurrentCursorPos;

		//根据实际高度，调整平移量
		//初步设置每次平移单位为高度值的0.01倍（经验值）
		//后续完善需要将该值设置为一个可以供用户修改的参数
		MoveDirection = FVector::ZeroVector;
		GetWorld()->GetFirstPlayerController()->GetMousePosition(CursorPos.X, CursorPos.Y);
		UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(GetWorld(), 0), CursorPos, WorldPos, MoveDirection);
		int32 moveStep = WorldPos.Z*MoveStepFactor;

		OurCamera->AddLocalOffset(FVector(0, -MoveOffset.X*moveStep, MoveOffset.Y*moveStep));
	}
}


//默认的鼠标右键调整视角逻辑，根据mouseX的值,沿Z轴旋转，即偏航角的变化
void AUE_World_Camera::OnTurnRotate(float axisValue)
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
void AUE_World_Camera::OnLookAtRotate(float axisValue)
{
	if (!IsRotateCameraState) return;
	if (IsRotateCameraState && FMath::Abs(axisValue) > KINDA_SMALL_NUMBER)
	{
		FRotator NewRotationPitch = OurCameraSpringArm->GetComponentRotation();
		NewRotationPitch.Pitch = FMath::Clamp(NewRotationPitch.Pitch + axisValue, -90.0f, -15.0f);
		OurCameraSpringArm->SetWorldRotation(NewRotationPitch);
	}
}

