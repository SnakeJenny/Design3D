#include "GeoLayer.h"

//响应相机状态改变函数，实现实际的数据加载逻辑
void GeoLayer::OnCameraStateChange(const CameraState &newCameraState, const CameraState &lastCameraState)
{
	//增加 判定条件if()

	TSet<ITileInfo *> tilesShouldBeLoaded;
	sceneCulling->GetTilesShouldbeLoaded(newCameraState, tilesShouldBeLoaded);


	TSet<ITileInfo *> refinedTilesShouldBeLoaded;
	tileLoadStrategy->GetRefiningLoadingTiles(tilesShouldBeLoaded, refinedTilesShouldBeLoaded);

	TSet<ITileInfo *> tileLoading;
	TSet<ITileInfo *> tileUnloading;
	loadManager->GetLoadingTiles(refinedTilesShouldBeLoaded, tileLoading, tileUnloading);

	for (ITileInfo * currentTile : tileLoading)
	{
		bool loadedSuccess = tileLoadTaskExcutor->LoadOneTile(currentTile, true);
		if (loadedSuccess)
		{
			loadManager->UpdateLoadedTile(currentTile);
		}
	}

	for (ITileInfo * currentTile : tileUnloading)
	{
		bool unloadedSuccess = tileLoadTaskExcutor->UnloadOneTile(currentTile, true);
		if (unloadedSuccess)
		{
			loadManager->UpdateUnloadedTile(currentTile);
		}
	}
}

//实现当前图层除了相机变化后需要加载数据以外的其他tick逻辑
void GeoLayer::OnTick()
{}


GridTileLayer::GridTileLayer(const FString layerSourcePath, AActor* pActor)
{
	this->dataSourcePath = layerSourcePath;	
	this->rootActor = pActor;	

	this->sceneCulling = new SceneCulling_CenterTileStrategy();
	this->tileLoadStrategy = new TileGridLoadRefiningStrategy();
	this->loadManager = new TileGridLoadManager();
	this->tileLoadTaskExcutor = new GridTileLoadTaskExcutor(layerSourcePath, pActor);
}