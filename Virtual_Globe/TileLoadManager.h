#pragma once

#include "CoreMinimal.h"
#include "CoordinateSystem.h"
#include "TileInfo.h"
#include "SceneCulling.h"
#include <queue>

class TileLoadManager
{
public:
		
	
	TSet<TileNode> loadedTileSet;
	//
	TileLoadManager();


	//实际瓦片加载策略：

	//1.通过worldCameraManager计算出的seedtileNode，确定15邻域的相同层级的待加载瓦片
	//通过调用tileInfo.GetNeighbor_15(TArray<TileInfo_Quadtree>& neighbor_15)函数
	//2.在核心16个瓦片的基础上，计算外扩的粗一级别待加载瓦片
	//3.循环2步骤，直到计算出的瓦片充满整个屏幕，或者已计算到最粗一级瓦片
	/*void GetTileShouldBeLoaded(TileNode_Quadtree seedTileNode, FVector2D screenResolution
		, TArray<TileSet> &tileNodeShouldBeLoaded);*/
		//4.获取到较粗一级，预先加载的瓦片集合
	/*void GetRoughTileShouldBeLoaded(TArray<TileSet> &tileNodeShouldBeLoaded
		, int32 roughingStep, TArray<TileSet> &roughTileNodeShouldBeLoaded);*/

	//5.更新瓦片节点的加载和卸载队列,基于各个tileNode的tileLoadState进行判断
	//已加载且需要加载的从加载队列中移除，已加载且不需要加载的，放入卸载队列......
	TSet<TileNode> UpdateLoadingTileArray(TSet<TileNode> &tileShouldBeLoaded);

	TSet<TileNode> UpdateUnLoadingTileArray(TSet<TileNode> &tileShouldBeLoaded);

	

	//6.在具体的加载和卸载任务函数中，执行具体的加载和卸载步骤，基于UE接口
	void DoLoadingTasks(TArray<TileNode> loadingTileQueue, bool isAsyn);

	void DoUnloadingTasks(TArray<TileNode> unloadingTileQueue, bool isAsyn);
	

	//描述该节点的加载状态，考虑放到 tileloadmanager类中
	enum tileLoadState
	{
		LOADED,//应加载，且已加载
		UNLOADED,//应加载，但未加载		
		REPLACED_BY_CHILDREN,//已加载，已被子节点替换
	};

};
//继续拆分加载逻辑


