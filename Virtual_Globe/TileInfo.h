#pragma once
#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "Math/Rotator.h"
#include "CoordinateSystem.h"


//完善这个类
class TileItem
{};

//用于定义瓦片描述信息的基类
//四叉树瓦片、r树瓦片、osgb数据的索引瓦片等，一切瓦片类型的描述信息均继承自该基类
struct TileInfo
{
public:
	//用于记录瓦片存储的根目录路径
	//FString BasePath;

	//用于记录瓦片存储的相对路径
	FString TilePath;
		
	TArray<TileItem> TileItemArray;

	//virtual ~TileInfo();

	//判定该瓦片文件是否存在
	virtual bool IsTileFileExist()=0;

	//返回瓦片信息
	virtual FString TileToString()=0;

	//通过该infoString，构建tileInfo
	//TileInfo();

	//获取该瓦片的实际物理磁盘路径
	virtual FString GetTileDiskPath()=0;

	virtual FString GetBasePath()=0;
};

//矩形的瓦片描述信息类，继承自TileInfo基类,全球瓦片
struct TileInfo_Grid :public TileInfo
{
public:
	//该瓦片的层级
	int32 LevelNum;
	//该瓦片的行号
	int32 Row;
	//该瓦片的列号
	int32 Col;	

	enum TilePositionInParent
	{
		SouthWest,
		SouthEast,
		NorthWest,
		NorthEast,
	};

	FVector2D GeographicGridOriginPt = FVector2D(-180.0, -90.0);

	//该瓦片的左下角点，记录二维平面上该瓦片的x_min、y_min，相对于upRightPt
	FVector2D DownLeftPt;

	//该瓦片的右上角点，记录二维平面上该瓦片的x_max、y_max，相对于downLeftPt
	FVector2D UpRightPt;

	TilePositionInParent GetTilePositionInParent();

	TileInfo_Grid* GetUpTile();
	TileInfo_Grid* GetDownTile();
	TileInfo_Grid* GetLeftTile();
	TileInfo_Grid* GetRightTile();

	TileInfo_Grid* GetUpUpTile();
	TileInfo_Grid* GetDownDownTile();
	//TileInfo_Grid* GetLeftLeftTile();
	//TileInfo_Grid* GetRightRightTile();


	TileInfo_Grid();

	TileInfo_Grid(const int32 layerNum, const int32 Row, const int32 Col);


	//判定该瓦片文件是否存在
	virtual bool IsTileFileExist();

	//返回瓦片信息
	virtual FString TileToString();
	
	//获取该瓦片的实际物理磁盘路径
	virtual FString GetTileDiskPath();

	virtual FString GetBasePath();

	bool IsTileValid();

	bool IsPositionIn(FVector testPt);

	double GetTileGridSize();

	int32 GetTileRowCountInGlobe();

	int32 GetTileColCountInGlobe();

	FVector2D GetTileMin();

	FVector2D GetTileMax();

	//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的八邻域瓦片的描述信息
	//具体邻域情况如下图所示，*为本瓦片，+为邻域瓦片
	//      012
	//      3*4
	//      567	
	void GetNeighbor_8(TArray<TileInfo_Grid>& neighbor_8);

	//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的四邻域瓦片的描述信息
	//具体邻域情况如下图所示，*为本瓦片，+为邻域瓦片
	//       0    
	//      1*2    
	//       3 	 
	void GetNeighbor_4(TArray<TileInfo_Grid>& neighbor_4);

	//基于当前瓦片，返回紧邻的三个瓦片，并且紧邻三个瓦片和本瓦片共同构成上一级的父瓦片
	//可能情况：*为本瓦片
	//   *0       0*       01       01
	//   12       12       *2       2*
	void GetNeighbor_3(TArray<TileInfo_Grid>& neighbor_3);

	//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的15邻域瓦片的描述信息
	//具体邻域情况如下图所示，*为本瓦片，+为邻域瓦片
	//      0   1  2  3    0   1  2  3    0   1  2  3    0   1  2  3
	//      4   *  5  6    4   5  *  6    4   5  6  7    4   5  6  7      
	//      7   8  9 10    7   8  9 10    8   *  9 10    8   9  * 10
	//      11 12 13 14    11 12 13 14    11 12 13 14    11 12 13 14
	void GetNeighbor_15(TArray<TileInfo_Grid>& neighbor_15);

	void GetNeighbor_15(TArray<TileInfo_Grid*>& neighbor_15);

	//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的所有子节点瓦片描述信息
	void GetChildren(TArray<TileInfo_Grid>& children);

	//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的父节点瓦片描述信息
	TileInfo_Grid GetParent();

	//判断两个瓦片是否是同一个瓦片
	bool Equal(TileInfo_Grid *other);

	static TileInfo_Grid GetTileByLevelNumAndCoord(int32 thisLevelNum, Geographic2D Coordinate);
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

class TileInfo_Rtree :TileInfo
{};

class TileInfo_OSGB :TileInfo
{};


//应用于类似于四叉树、R树、OSGB等链表结构的瓦片节点数据结构
struct TileNode
{
public:
	//该瓦片节点的瓦片描述信息
	TileInfo* tileInfo;
	//该瓦片节点的孩子节点集合	
	TArray<TileNode*> children;
	//该瓦片节点的父节点
	TileNode *parent;
	//基于特定的索引规则，判定该节点的孩子节点瓦片是否均存在
	bool IsAllChildrenExist();

	TileNode();

	TileNode(int levelNum, int row, int col);

	TileNode(int levelNum, int row, int col, TileNode* parent);

	TileNode(TileInfo_Grid inputTileInfo);

	TileNode(TileInfo_Grid* inputTileInfo);

	//创建当前瓦片的子节点数组
	void CreateSubTileNode();

};

//四叉树瓦片节点数据结构，重载IsAllChildrenExist方法
//且children个数恒定为4
//struct TileNode_Quadtree:TileNode
//{
//
//
//};

//R树瓦片节点数据结构，重载IsAllChildrenExist方法
//且children个数根据情况变化
//struct TileNode_Rtree :TileNode
//{
//
//};

//一般化的非树结构存储的瓦片集合
struct TileSet
{
	//通过一维数组存储所有瓦片集合
	void GetTileNodeSet(TArray<TileNode>& tileNodeArray);
};

struct TreeTileSet :TileSet
{
	TileNode* root;
};

struct ArrayTileSet :TileSet
{
	TArray<TileNode> tileNodeArray;
};

//后续需要用到时，再定义这个类
class wholeQuadtree
{
public:
	//该四叉树总层数
	int32 layerCount;
	
	//该四叉树的所有瓦片节点的集合
	//按照不同层级存储的四叉树瓦片节点数据集
	//每一个tileset对应于四叉树中的一层所有瓦片节点
	//quadtreeTileNodeSet的长度为当前四叉树的总层数
	TArray<TileSet> quadtreeTileNodeSet;

	//将wholeQuadtree信息写入元数据
	void ToMetadata(FString metaDataPath);

	//读取元数据，生成该wholeQuadtree
	wholeQuadtree(FString metaDataPath); 

};


