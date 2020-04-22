#include "TileLoadManager.h"

//从当前应加载集合中，增加逻辑，保证瓦片加载流畅性、高效性
void TileGridLoadRefiningStrategy::GetRefiningLoadingTiles(const TSet<ITileInfo*> &inTilesShouldBeLoaded, TSet<ITileInfo*> &outTilesLoading)
{
	outTilesLoading = inTilesShouldBeLoaded;
	return;
}

//从当前应加载集合中，增加逻辑，保证瓦片加载流畅性、高效性
void OSGB_GridLoadRefiningStrategy::GetRefiningLoadingTiles(const TSet<ITileInfo*> &inTilesShouldBeLoaded, TSet<ITileInfo*> &outTilesLoading)
{
	outTilesLoading = inTilesShouldBeLoaded;
	return;
}

TileLoadManager::TileLoadManager()
{}

//从应加载瓦片集合A，场景中已经加载瓦片集合B中，计算当前实际应该加载的瓦片集合C
//从应加载瓦片集合A，场景中已经加载瓦片集合B中，计算当前实际应该卸载的瓦片集合D
//C=A-B
//D=B-A
void TileLoadManager::GetLoadingTiles(const TSet<ITileInfo*> &inTilesShouldBeLoaded, TSet<ITileInfo*> &outTilesLoading, TSet<ITileInfo*> &outTilesUnloading)
{
	//更新loading集合
	for (ITileInfo* thisTile : inTilesShouldBeLoaded)
	{
		bool thisTileShouldBeLoading = true;	

		for (ITileInfo* tileLoaded : this->loadedTileSet)
		{		
			if (thisTile->Equal(tileLoaded))
			{
				thisTileShouldBeLoading = false;
				break;
			}
		}
		if (thisTileShouldBeLoading == true)
			outTilesLoading.Add(thisTile);
	}

	//更新unloading集合
	for (ITileInfo* tileLoaded : this->loadedTileSet)
	{
		bool thisTileShouldBeUnloading = true;	
		for (ITileInfo* tileShouldBeLoading : inTilesShouldBeLoaded)
		{			
			if (tileLoaded->Equal(tileShouldBeLoading))
			{
				thisTileShouldBeUnloading = false;
				break;
			}
		}
		if (thisTileShouldBeUnloading == true)
			outTilesUnloading.Add(tileLoaded);
	}
}

//完成实际特定瓦片加载后的状态更新，更新已加载瓦片集合（loadedTileSet）
//将loadedTile加入loadedTileSet
void TileLoadManager::UpdateLoadedTile(ITileInfo* loadedTile)
{
	bool thisTileHasBeenLoaded = false;

	if (this->loadedTileSet.Num() == 0)
	{
		this->loadedTileSet.Add(loadedTile);
		return;
	}	

	for (ITileInfo* tileLoaded : this->loadedTileSet)
	{	
		if (loadedTile->Equal(tileLoaded))
		{
			thisTileHasBeenLoaded = true;
			break;
		}
	}
	if (thisTileHasBeenLoaded == false)
		this->loadedTileSet.Add(loadedTile);
}

//完成实际特定瓦片卸载后的状态更新，更新已加载瓦片集合（loadedTileSet）
//将unloadedTile从loadedTileSet中移除
void TileLoadManager::UpdateUnloadedTile(ITileInfo* unloadedTile)
{
	for (ITileInfo* tileLoaded : this->loadedTileSet)
	{		
		if (unloadedTile->Equal(tileLoaded))
		{
			this->loadedTileSet.Remove(tileLoaded);
			this->loadedTileSet.CompactStable();
			break;
		}
	}
}