#include "TileLoadManager.h"

TileLoadManager::TileLoadManager()
{}

TSet<TileNode*> TileLoadManager::UpdateLoadingTileArray(TSet<TileNode*> tileShouldBeLoaded)
{
	TSet<TileNode*> loadingTileArray;
	if (tileShouldBeLoaded.Num() == 0 && this->loadedTileSet.Num() == 0)
		return loadingTileArray;

	for (TileNode* tileNodeShouldBeLoading : tileShouldBeLoaded)
	{
		bool thisNodeShouldBeLoading = true;
		TileInfo_Grid* thisTileInfo_Grid = (TileInfo_Grid*)tileNodeShouldBeLoading->tileInfo;
		
		for (TileNode* tileNodeLoaded : this->loadedTileSet)
		{
			TileInfo_Grid* thatTileInfo_Grid = (TileInfo_Grid*)tileNodeLoaded->tileInfo;
			if (thisTileInfo_Grid->Equal(thatTileInfo_Grid))
			{
				thisNodeShouldBeLoading = false;
				break;
			}
		}
		if (thisNodeShouldBeLoading == true)
			loadingTileArray.Add(tileNodeShouldBeLoading);
	}
	return loadingTileArray;
}

TSet<TileNode*> TileLoadManager::UpdateUnLoadingTileArray(TSet<TileNode*> tileShouldBeLoaded)
{
	TSet<TileNode*> unLoadingTileArray;
	if (tileShouldBeLoaded.Num() == 0 && this->loadedTileSet.Num() == 0)
		return unLoadingTileArray;

	for (TileNode* tileNodeLoaded : this->loadedTileSet)
	{
		bool thisNodeShouldBeUnloading = true;
		TileInfo_Grid* thisTileInfo_Grid = (TileInfo_Grid*)tileNodeLoaded->tileInfo;

		for (TileNode* tileNodeShouldBeLoading : tileShouldBeLoaded)
		{
			TileInfo_Grid* thatTileInfo_Grid = (TileInfo_Grid*)tileNodeShouldBeLoading->tileInfo;
			if (thisTileInfo_Grid->Equal(thatTileInfo_Grid))
			{
				thisNodeShouldBeUnloading = false;
				break;
			}
		}
		if (thisNodeShouldBeUnloading == true)
			unLoadingTileArray.Add(tileNodeLoaded);
	}

	return unLoadingTileArray;
}

void TileLoadManager::UpdateLoadedTileArray(TileNode* loadedTileNode)
{
	bool thisTileHasBeenLoaded = false;

	if (this->loadedTileSet.Num() == 0)
	{
		this->loadedTileSet.Add(loadedTileNode);
		return;
	}		
	TileInfo_Grid* thisLoadedTileInfo_Grid = (TileInfo_Grid*)loadedTileNode->tileInfo;

	for (TileNode* tileNodeLoaded : this->loadedTileSet)
	{		
		TileInfo_Grid* thisTileInfo_Grid = (TileInfo_Grid*)tileNodeLoaded->tileInfo;
		if (thisLoadedTileInfo_Grid->Equal(thisTileInfo_Grid))
		{
			thisTileHasBeenLoaded = true;
			break;
		}				
	}
	if(thisTileHasBeenLoaded == false)
		this->loadedTileSet.Add(loadedTileNode);	
}