#pragma once
#include "CoreMinimal.h"
#include "SceneCulling.h"
#include "TileLoadManager.h"
#include "TileLoadTaskExcutor.h"
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

};

class GridTileLayer :GeoLayer
{
public:
	GridTileLayer(const FString layerSourcePath, AActor* rootActor);
};

