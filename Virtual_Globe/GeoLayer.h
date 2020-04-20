#pragma once
#include "CoreMinimal.h"
#include "SceneCulling.h"
#include "TileLoadManager.h"
#include "TileLoadTaskExcutor.h"
#include "ViewerCameraController.h"
class GeoLayer
{
public:
	ISceneCulling* sceneCulling;
	ITileLoadRefiningStrategy* tileLoadStrategy;
	ITileLoadManager* loadManager;
	ITileLoadTaskExcutor* tileLoadTaskExcutor;

	//当前图层数据源路径，磁盘路径或网络路径跟目录
	FString dataSourcePath;
	//是否显示该图层标识
	bool showLayer;

	AActor* rootActor;

	//实际的瓦片加载逻辑
	void OnTick();
	
	void OnCameraStateChange(const CameraState &newCameraState, const CameraState &lastCameraState);	

public:
	AViewerCameraController* pViewerCameraController;
};

class GridTileLayer : public GeoLayer
{
public:
	//virtual void OnTick() override;
	GridTileLayer(const FString layerSourcePath, AActor* rootActor, AViewerCameraController* inViewerCameraController, CoordinateSystem* inCoordinateSystem);
};

