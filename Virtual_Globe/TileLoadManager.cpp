#include "TileLoadManager.h"

TileLoadManager::TileLoadManager()
{}

TSet<TileNode*> TileLoadManager::UpdateLoadingTileArray(TSet<TileNode*> tileShouldBeLoaded)
{
	TSet<TileNode*> loadingTileArray;
	if (tileShouldBeLoaded.Num() == 0 && this->loadedTileSet.Num() == 0)
		return loadingTileArray;

	loadingTileArray = tileShouldBeLoaded.Difference(this->loadedTileSet);

	//将新的需要加载的瓦片集合赋值给Loadedset，后续loadedset的数组需要实际已经完成加载的瓦片逻辑后维护
	loadedTileSet = loadingTileArray;

	return loadingTileArray;
}

TSet<TileNode*> TileLoadManager::UpdateUnLoadingTileArray(TSet<TileNode*> tileShouldBeLoaded)
{
	TSet<TileNode*> loadingTileArray;
	if (tileShouldBeLoaded.Num() == 0 && this->loadedTileSet.Num() == 0)
		return loadingTileArray;

	loadingTileArray = this->loadedTileSet.Difference(tileShouldBeLoaded);

	return loadingTileArray;
}