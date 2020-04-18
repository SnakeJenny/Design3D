#include "GeoMap.h"

GeoMap::GeoMap(CoordinateSystem* pCoordinateSystem, CameraState initCameraState, AActor* pActor)
{
	this->lastCameraState = initCameraState;
	this->mapCoordinateSystem = pCoordinateSystem;
	this->rootActor = pActor;
}

void GeoMap::AddLayer(GeoLayer* addingLayer)
{
	if (addingLayer )
	{
		this->geoLayerArray.Add(addingLayer);		
	}
}

bool GeoMap::IsCameraStateChange(const CameraState &lastCameraState, const CameraState &newCameraState)
{
	if (lastCameraState.AspectRatio != newCameraState.AspectRatio)
		return true;
	if (lastCameraState.FOV != newCameraState.FOV)
		return true;
	if (!lastCameraState.screenResolution.Equals(newCameraState.screenResolution))
		return true;

	//相机状态改变的判定条件，之后可以根据实际情况细化
	if (!lastCameraState.Location.Equals(newCameraState.Location))
		return true;
	if (!lastCameraState.Rotator.Equals(newCameraState.Rotator))
		return true;

	return false;
}

void GeoMap::OnTick(CameraState newCameraState)
{	//判断相机差异	
	bool cameraChanged = IsCameraStateChange(lastCameraState, newCameraState);

	if (cameraChanged)
	{
		for (GeoLayer * currentLayer : geoLayerArray)
		{
			currentLayer->OnCameraStateChange(newCameraState, lastCameraState);
		}
	}
	lastCameraState = newCameraState;

	for (GeoLayer * currentLayer : geoLayerArray)
	{
		currentLayer->OnTick();
	}
}