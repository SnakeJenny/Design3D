// Fill out your copyright notice in the Description page of Project Settings.


#include "VirtualGlobeSceneManager.h"




bool AVirtualGlobeSceneManager::SetViewerCameraControllerObject()
{
	//获取场景中的相机AViewerCameraController对象
	UWorld* world = GetWorld();
	check(world);
	TArray<AActor*> _actor;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AViewerCameraController::StaticClass(), _actor);
	if (_actor.Num() > 0)
	{
		AViewerCameraController* pViewerCameraController = (AViewerCameraController*)_actor[0];

		if (pViewerCameraController)
		{
			this->UE_CameraController = pViewerCameraController;
			return true;
		}
	}
	return false;
}

//按照三维地球的空间设置初始椭球和初始相机位置
void AVirtualGlobeSceneManager::InitializeVirtualGlobeSphere()
{
	//创建地球球体坐标系统
	FVector radii = FVector(6378137.0, 6378137.0, 6356752.314245);
	FRotator InRotation = FRotator(0.0, 0.0, 0.0);
	FVector InTranslation = FVector(0.0, 0.0, 0.0);
	FVector InScale3D = FVector(1.0, 1.0, 1.0);

	Sphere_CoordinateSystem* earth3d_CoordinateSystem = new Sphere_CoordinateSystem(radii,
		InRotation,
		InTranslation,
		InScale3D);

	//创建geomap对象，用于具体的各类数据源（图层）的加载管理
	this->geoCameraState.FOV = 120.0;
	//设置相机的初始位置和偏转角度，直接读取相机的实际位置
	this->geoCameraState.Location = UE_CameraController->OurCamera->GetComponentLocation();
	this->geoCameraState.Rotator = UE_CameraController->OurCamera->GetComponentRotation();
	this->geoCameraState.screenResolution = FVector2D(1920, 1080);
	this->geoCameraState.AspectRatio = 2.0;

	//是否需要增加从uecamera到geocamera的矩阵变换？
	this->geoCameraState.Location = worldToUE_Transform.InverseTransformPosition(geoCameraState.Location);
	this->geoCameraState.Rotator = worldToUE_Transform.InverseTransformRotation(geoCameraState.Rotator.Quaternion()).Rotator();

	//创建map对象
	this->virtualGlobeMap = new GeoMap(earth3d_CoordinateSystem, this->geoCameraState,this);

	//往map中添加layer数据源	
	//获取场景中的相机UE_World_Camera
	UWorld* world = GetWorld();
	check(world);
	TArray<AActor*> _actor;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGridTileLoader::StaticClass(), _actor);
	if (_actor.Num() > 0)
	{
		AGridTileLoader* gridTileLoaderActor = (AGridTileLoader*)_actor[0];
		if (gridTileLoaderActor)
		{
			FString basePath = "/Game/Data/";
			GridTileLayer* pGridTileLayer = new GridTileLayer(basePath, (AActor*)gridTileLoaderActor);
			this->virtualGlobeMap->AddLayer((GeoLayer*)pGridTileLayer);
		}
	}	
}

// Sets default values
AVirtualGlobeSceneManager::AVirtualGlobeSceneManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->virtualGlobeSpaceType = 0;

	worldToUE_Transform.SetScale3D(FVector(1, 1, -1));		
	FRotator NewRotator(180, 180, 0);
	worldToUE_Transform.SetRotation(NewRotator.Quaternion());
}

// Called when the game starts or when spawned
void AVirtualGlobeSceneManager::BeginPlay()
{
	Super::BeginPlay();

	//获取场景中的相机AViewerCameraController对象
	if (SetViewerCameraControllerObject())
	{
		loadCameraSuccess = true;
	}

	//若当前地球空间类型为三维球体
	if (loadCameraSuccess&&this->virtualGlobeSpaceType == 0)
	{
		InitializeVirtualGlobeSphere();
	}
	
}

// Called every frame
void AVirtualGlobeSceneManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//是否需要增加从uecamera到geocamera的矩阵变换？
	this->geoCameraState.Location = UE_CameraController->OurCamera->GetComponentLocation();
	this->geoCameraState.Rotator = UE_CameraController->OurCamera->GetComponentRotation();

	this->geoCameraState.Location = worldToUE_Transform.InverseTransformPosition(geoCameraState.Location);
	this->geoCameraState.Rotator = worldToUE_Transform.InverseTransformRotation(geoCameraState.Rotator.Quaternion()).Rotator();
	this->virtualGlobeMap->OnTick(this->geoCameraState);

}

