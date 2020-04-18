#pragma once
#include "CoreMinimal.h"
#include "GeoLayer.h"
//#include "UE_World_Camera.h"
class GeoMap
{
private:
	TArray<GeoLayer *> geoLayerArray;
	//AUE_World_Camera * thisUE_World_Camera;
	CameraState lastCameraState;

	AActor* rootActor;

	CoordinateSystem* mapCoordinateSystem;

	bool IsCameraStateChange(const CameraState &lastCameraState, const CameraState &newCameraState);

public:
	//检查前后帧相机的差异
	//如果变化了，通知所有layer，把新的相机位置通知给各个layer
	void OnTick(CameraState newCameraState);
	GeoMap(CoordinateSystem* pCoordinateSystem, CameraState initCameraState, AActor* pActor);

	void AddLayer(GeoLayer* addingLayer);
	
};

