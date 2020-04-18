// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeoMap.h"
#include "GeoLayer.h"
#include "ViewerCameraController.h"
#include "CoordinateSystem.h"
#include "TileLoadManager.h"
#include "SceneCulling.h"
#include "LandscapeMaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Kismet/GameplayStatics.h"
#include "GridTileLoader.h"
#include "GeoLayer.h"

#include "VirtualGlobeSceneManager.generated.h"

UCLASS()
class VIRTUAL_GLOBE_API AVirtualGlobeSceneManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVirtualGlobeSceneManager();


	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* StaticMeshComponent;

	UMaterialInstance* MeshMaterial;
	//用mXYtoComponentMap记录各TileMeshComponent的层号和行列号
	TMap<FVector, UStaticMeshComponent*> mXYtoComponentMap;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	GeoMap* virtualGlobeMap;

	AViewerCameraController* UE_CameraController;

	CameraState geoCameraState;

	//地球空间的类型，0代表三维球体Sphere，1代表平面
	int virtualGlobeSpaceType;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

private:

	bool loadCameraSuccess = false;
	FTransform worldToUE_Transform;

	bool SetViewerCameraControllerObject();

	void InitializeVirtualGlobeSphere();

};


