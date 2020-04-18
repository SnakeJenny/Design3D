#include "TileLoadManager.h"

//从当前应加载集合中，增加逻辑，保证瓦片加载流畅性、高效性
void TileGridLoadRefiningStrategy::GetRefiningLoadingTiles(const TSet<ITileInfo*> &inTilesShouldBeLoaded, TSet<ITileInfo*> &outTilesLoading)
{
	outTilesLoading = inTilesShouldBeLoaded;
	return;
}

TileGridLoadManager::TileGridLoadManager()
{}

//从应加载瓦片集合A，场景中已经加载瓦片集合B中，计算当前实际应该加载的瓦片集合C
//从应加载瓦片集合A，场景中已经加载瓦片集合B中，计算当前实际应该卸载的瓦片集合D
//C=A-B
//D=B-A
void TileGridLoadManager::GetLoadingTiles(const TSet<ITileInfo*> &inTilesShouldBeLoaded, TSet<ITileInfo*> &outTilesLoading, TSet<ITileInfo*> &outTilesUnloading)
{
	//更新loading集合
	for (ITileInfo* thisTile : inTilesShouldBeLoaded)
	{
		bool thisTileShouldBeLoading = true;
		TileInfo_Grid* thisTileInfo_Grid = (TileInfo_Grid*)thisTile;
		if (thisTileInfo_Grid == NULL)
			continue;

		for (ITileInfo* tileLoaded : this->loadedTileSet)
		{
			TileInfo_Grid* thatTileInfo_Grid = (TileInfo_Grid*)tileLoaded;
			if (thatTileInfo_Grid == NULL)
				continue;

			if (thisTileInfo_Grid->Equal(thatTileInfo_Grid))
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
		TileInfo_Grid* thisTileInfo_Grid = (TileInfo_Grid*)tileLoaded;
		if (thisTileInfo_Grid == NULL)
			continue;

		for (ITileInfo* tileShouldBeLoading : inTilesShouldBeLoaded)
		{
			TileInfo_Grid* thatTileInfo_Grid = (TileInfo_Grid*)tileShouldBeLoading;
			if (thatTileInfo_Grid == NULL)
				continue;
			if (thisTileInfo_Grid->Equal(thatTileInfo_Grid))
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
void TileGridLoadManager::UpdateLoadedTile(ITileInfo* loadedTile)
{
	bool thisTileHasBeenLoaded = false;

	if (this->loadedTileSet.Num() == 0)
	{
		this->loadedTileSet.Add(loadedTile);
		return;
	}
	TileInfo_Grid* thisLoadedTileInfo_Grid = (TileInfo_Grid*)loadedTile;
	if (thisLoadedTileInfo_Grid == NULL)
		return;

	for (ITileInfo* tileLoaded : this->loadedTileSet)
	{
		TileInfo_Grid* thisTileInfo_Grid = (TileInfo_Grid*)tileLoaded;
		if (thisTileInfo_Grid == NULL)
			continue;

		if (thisLoadedTileInfo_Grid->Equal(thisTileInfo_Grid))
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
void TileGridLoadManager::UpdateUnloadedTile(ITileInfo* unloadedTile)
{
	TileInfo_Grid* thisUnloadedTileInfo_Grid = (TileInfo_Grid*)unloadedTile;
	if (thisUnloadedTileInfo_Grid == NULL)
		return;

	for (ITileInfo* tileLoaded : this->loadedTileSet)
	{
		TileInfo_Grid* thisTileInfo_Grid = (TileInfo_Grid*)tileLoaded;
		if (thisTileInfo_Grid == NULL)
			continue;
		if (thisUnloadedTileInfo_Grid->Equal(thisTileInfo_Grid))
		{
			this->loadedTileSet.Remove(tileLoaded);
			this->loadedTileSet.CompactStable();
			break;
		}
	}
}