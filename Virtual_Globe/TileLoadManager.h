#pragma once

#include "CoreMinimal.h"
#include "CoordinateSystem.h"
#include "TileInfo.h"
#include "SceneCulling.h"

//在完成需要加载瓦片计算的基础上，为了保障前端显示调度的流畅性，新增中间过程，对应该加载的瓦片集合进行进一步的优化
class ITileLoadRefiningStrategy
{
public:
	virtual void GetRefiningLoadingTiles(const TSet<ITileInfo*> &inTilesShouldBeLoaded, TSet<ITileInfo*> &outTilesLoading) = 0;
};

class TileGridLoadRefiningStrategy:public ITileLoadRefiningStrategy
{
public:
	void GetRefiningLoadingTiles(const TSet<ITileInfo*> &inTilesShouldBeLoaded, TSet<ITileInfo*> &outTilesLoading) ;
};


class OSGB_GridLoadRefiningStrategy :public ITileLoadRefiningStrategy
{
public:
	void GetRefiningLoadingTiles(const TSet<ITileInfo*> &inTilesShouldBeLoaded, TSet<ITileInfo*> &outTilesLoading);
};

//负责瓦片加载管理逻辑的基础接口类
class TileLoadManager
{
public:
	TileLoadManager();

	//从应加载瓦片集合A，场景中已经加载瓦片集合B中，计算当前实际应该加载的瓦片集合C
	//从应加载瓦片集合A，场景中已经加载瓦片集合B中，计算当前实际应该卸载的瓦片集合D
	//C=A-B
	//D=B-A
	void GetLoadingTiles(const TSet<ITileInfo*> &inTilesShouldBeLoaded, TSet<ITileInfo*> &outTilesLoading, TSet<ITileInfo*> &outTilesUnloading);

	//完成实际特定瓦片加载后的状态更新，更新已加载瓦片集合（loadedTileSet）
	//将loadedTile加入loadedTileSet
	void UpdateLoadedTile(ITileInfo* loadedTile);

	//完成实际特定瓦片卸载后的状态更新，更新已加载瓦片集合（loadedTileSet）
	//将unloadedTile从loadedTileSet中移除
	void UpdateUnloadedTile(ITileInfo* unloadedTile);

	//virtual ~ITileLoadManager();


private:

	TSet<ITileInfo*> loadedTileSet;

	//描述该节点的加载状态，考虑放到 tileloadmanager类中
	enum tileLoadState
	{
		LOADED,//应加载，且已加载
		UNLOADED,//应加载，但未加载		
		REPLACED_BY_CHILDREN,//已加载，已被子节点替换
	};
};