#include "TileLoadManager.h"

TSet<TileNode> TileLoadManager::UpdateLoadingTileArray(TSet<TileNode> &tileShouldBeLoaded)
{
	TSet<TileNode> loadingTileArray;
	if (tileShouldBeLoaded.Num() == 0 && this->loadedTileSet.Num() == 0)
		return loadingTileArray;

	loadingTileArray = tileShouldBeLoaded.Difference(this->loadedTileSet);

	return loadingTileArray;
}

TSet<TileNode> TileLoadManager::UpdateUnLoadingTileArray(TSet<TileNode> &tileShouldBeLoaded)
{
	TSet<TileNode> loadingTileArray;
	if (tileShouldBeLoaded.Num() == 0 && this->loadedTileSet.Num() == 0)
		return loadingTileArray;

	loadingTileArray = this->loadedTileSet.Difference(tileShouldBeLoaded);

	return loadingTileArray;
}