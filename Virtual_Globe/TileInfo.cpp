
#include "TileInfo.h"


TileInfo_Grid::TileInfo_Grid(const int32 layerNum, const int32 row, const int32 col)
{
	this->LayerNum = layerNum;
	this->Row = row;
	this->Col = col;

	double tileGridSize = 180.0 / FMath::Pow(2.0, layerNum);

	this->DownLeftPt = FVector2D(GeographicGridOriginPt.X + col * tileGridSize, GeographicGridOriginPt.Y + row * tileGridSize);

	this->UpRightPt = FVector2D(GeographicGridOriginPt.X + (col + 1)*tileGridSize, GeographicGridOriginPt.Y + (row + 1)*tileGridSize);
} 

FVector2D TileInfo_Grid::GetTileMin()
{
	return this->DownLeftPt;
}

FVector2D TileInfo_Grid::GetTileMax()
{
	return this->DownLeftPt;
}