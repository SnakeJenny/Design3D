#pragma once
#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "Math/Rotator.h"
#include "CoordinateSystem.h"


//后续根据实际情况完善这个类，丰富tile中包含数据的具体区别与内涵
class TileItem
{};

//用于定义瓦片描述信息的接口基类
//四叉树瓦片、r树瓦片、osgb数据的索引瓦片等，一切瓦片类型的描述信息均继承自该基类
struct ITileInfo
{
public:
	
	//用于记录瓦片存储的相对路径
	virtual FString GetTilePath() = 0;

	virtual FTransform GetTileTransform() = 0;
		
	//TArray<TileItem> TileItemArray;

	//virtual ~TileInfo();

	//判定该瓦片文件是否存在
	virtual bool IsTileFileExist() = 0;

	//返回瓦片信息的字符串
	virtual FString TileToString() = 0;
};

//矩形的瓦片描述信息类，继承自TileInfo基类,全球瓦片
struct TileInfo_Grid :public ITileInfo
{
public:
	//该瓦片的层级
	int32 LevelNum;
	//该瓦片的行号
	int32 Row;
	//该瓦片的列号
	int32 Col;	

	//该瓦片的左下角点，记录二维平面上该瓦片的x_min、y_min，相对于upRightPt
	FVector2D DownLeftPt;

	//该瓦片的右上角点，记录二维平面上该瓦片的x_max、y_max，相对于downLeftPt
	FVector2D UpRightPt;

	FTransform tileTransform;

	enum TilePositionInParent
	{
		SouthWest,
		SouthEast,
		NorthWest,
		NorthEast,
	};

	static TileInfo_Grid GetTileByLevelNumAndCoord(const int32 thisLevelNum, const Geographic2D Coordinate);

	TileInfo_Grid();

	TileInfo_Grid(const int32 layerNum, const int32 Row, const int32 Col, const FTransform inTransform);

	TileInfo_Grid(const int32 layerNum, const int32 Row, const int32 Col);
	
	//返回该瓦片体系下，地理原点坐标（-180，-90）
	FVector2D GetGeographicGridOriginPt();

	//用于记录瓦片存储的路径
	FString GetTilePath();
	
	//判定该瓦片文件是否存在
	bool IsTileFileExist();

	//返回瓦片信息的字符串
	FString TileToString();

	//判断该瓦片是正常瓦片还是默认构造的空瓦片
	bool IsTileValid();

	//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的所有子节点瓦片描述信息
	void GetChildren(TArray<TileInfo_Grid*>& children);

	//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的父节点瓦片描述信息
	TileInfo_Grid* GetParent();

	//判断两个瓦片是否是同一个瓦片
	bool Equal(const TileInfo_Grid *other);

	//获取该瓦片的格网边长，格网为正方形
	double GetTileGridSize();

	//基于四叉树原理，返回该瓦片在父节点中的具体位置，共四种可能
	TilePositionInParent GetTilePositionInParent();

	//判断经纬度坐标点testPt，是否在该瓦片范围内
	bool IsPositionIn(const FVector testPt);

	//判断经纬度坐标点testPt，是否在该瓦片范围内
	bool IsPositionIn(const FVector2D testPt);

	//判断经纬度点坐标构成的地理范围，是否与该瓦片有交点
	bool IsGeoRangeIntersect(const TArray<FVector2D> geoRange);

	//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的八邻域瓦片的描述信息
	//具体邻域情况如下图所示，*为本瓦片，+为邻域瓦片
	//      012
	//      3*4
	//      567	
	void GetNeighbor_8(TArray<TileInfo_Grid*>& neighbor_8);

	//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的四邻域瓦片的描述信息
	//具体邻域情况如下图所示，*为本瓦片，+为邻域瓦片
	//       0    
	//      1*2    
	//       3 	 
	void GetNeighbor_4(TArray<TileInfo_Grid*>& neighbor_4);

	//基于当前瓦片，返回紧邻的三个瓦片，并且紧邻三个瓦片和本瓦片共同构成上一级的父瓦片
	//可能情况：*为本瓦片
	//   *0       0*       01       01
	//   12       12       *2       2*
	void GetNeighbor_3(TArray<TileInfo_Grid*>& neighbor_3);

	//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的15邻域瓦片的描述信息
	//具体邻域情况如下图所示，*为本瓦片，+为邻域瓦片
	//      0   1  2  3    0   1  2  3    0   1  2  3    0   1  2  3
	//      4   *  5  6    4   5  *  6    4   5  6  7    4   5  6  7      
	//      7   8  9 10    7   8  9 10    8   *  9 10    8   9  * 10
	//      11 12 13 14    11 12 13 14    11 12 13 14    11 12 13 14
	void GetNeighbor_15(TArray<TileInfo_Grid*>& neighbor_15);
	//获取该层级瓦片在全球中的总行数
	int32 GetTileRowCountInGlobe();

	//获取该层级瓦片在全球中的总列数
	int32 GetTileColCountInGlobe();

	FTransform GetTileTransform();


private:	

	//获取该瓦片的相对位置邻居
	TileInfo_Grid* GetUpTile();
	//获取该瓦片的相对位置邻居
	TileInfo_Grid* GetDownTile();
	//获取该瓦片的相对位置邻居
	TileInfo_Grid* GetLeftTile();
	//获取该瓦片的相对位置邻居
	TileInfo_Grid* GetRightTile();
	//获取该瓦片的相对位置邻居
	TileInfo_Grid* GetUpUpTile();
	//获取该瓦片的相对位置邻居
	TileInfo_Grid* GetDownDownTile();

};



class Tile_DEM :TileItem
{
	//存储该瓦片的列数
	int32 row_count;

	//存储该瓦片的行数
	int32 col_count;

	//该瓦片的dem分辨率，x为横向分辨率，y为纵向分辨率
	FVector2D dem_resolution;

	//存储本dem瓦片的高程范围，x为height_min,y为height_max单位米
	FVector2D heightRange;

	//描述该瓦片的单位信息，meter为米，degree为度
	enum unitType
	{
		METER,
		DEGREE,
	};
};

class Tile_DOM :TileItem
{
	//存储该瓦片的列数
	int32 row_count;

	//存储该瓦片的行数
	int32 col_count;

	//该瓦片的dem分辨率，x为横向分辨率，y为纵向分辨率
	FVector2D dem_resolution;
	
	//描述该瓦片的单位信息，meter为米，degree为度
	enum unitType
	{
		METER,
		DEGREE,
	};
};

class TileInfo_Rtree :ITileInfo
{};

class TileInfo_OSGB :ITileInfo
{};