#pragma once
//用于定义三维坐标系统及其与UE世界中的三维坐标系统之间转换关系的类

#include "CoreMinimal.h"
#include "Vector3D.h"

//用于描述经纬度坐标的二维数据结构
struct Geographic2D
{
public:
	double Longitude;
	double Latitude;
	 
public:
	Geographic2D(double longitude, double latitude)
	{
		Longitude = longitude;
		Latitude = latitude;
	}
};

//用于描述经纬度坐标+高度的三维数据结构
struct Geographic3D
{
public:

	double Longitude;
	double Latitude;
	double Height;

public:
	Geographic3D(double longitude, double latitude, double height)
	{
		Longitude = longitude;
		Latitude = latitude;
		Height = height;
	}

	Geographic3D(double longitude, double latitude)
	{
		Longitude = longitude;
		Latitude = latitude;
		Height = 0;
	}

	Geographic3D(Geographic2D geographic2D, double height)
	{
		Longitude = geographic2D.Longitude;
		Latitude = geographic2D.Latitude;
		Height = height;
	}

	Geographic3D(const FVector & inPt)
	{
		Longitude = inPt.X;
		Latitude = inPt.Y;
		Height = inPt.Z;
	}

	FVector ToFVector()
	{
		return FVector(this->Longitude, this->Latitude, this->Height);
	}
};

class CoordinateSystem
{
public:
	//基于Origin Rotation UnitScaleInUE，确定的本坐标系统到另一个外部坐标系统的变换
	FTransform Transform;

	//本坐标系统中的原点在另一个外部坐标系统中的坐标位置
	FVector Origin;

	//本三维坐标系统中的坐标轴在另一个外部坐标系统中的旋转变化参数	
	FRotator Rotation;

	//本坐标系统的各坐标轴的坐标单位与外部坐标系统的单位之间的换算关系
	FVector UnitScaleInUE;

	CoordinateSystem();

	virtual ~CoordinateSystem();
	//本坐标系统转UE坐标系统，单点转换
	virtual FVector FromGeoCoordinateSystem(const FVector &inPt) = 0;

	//UE坐标系统转本坐标系统，单点转换
	virtual FVector ToGeoCoordinateSystem(const FVector &inPt) = 0;

};




//定义球体坐标系统类，继承自CoordinateSystem
class Sphere_CoordinateSystem :public CoordinateSystem
{
private:
	//球体坐标系，三个坐标轴的半径长度，默认情况xoy平面为赤道平面
	//xoz平面为本初子午线（0度经线）切割地球平面，yoz平面为东西经90度切割地球平面
	FVector _radii;

	//应用于不同坐标系间换算的中间参数，其值为x y z轴半径平方
	Vector3D _radiiSquared;

	//应用于不同坐标系间换算的中间参数，其值为_radiiSquared x y z值的平方
	Vector3D _radiiToTheFourth;

	//应用于不同坐标系间换算的中间参数，其值为_radiiSquared x y z值的倒数
	Vector3D _oneOverRadiiSquared;


public:

	Sphere_CoordinateSystem();

	//不同形式构造函数，定义椭球的三个轴长度
	//若为wgs84椭球，或cgcs2000椭球，三个轴的值分别为
	//x=6378130.0，y=6378130.0，z=6356750.0，考虑到float有效位仅6位的取值，并非准确值
	Sphere_CoordinateSystem(const FVector &radii,
		const FRotator& InRotation,
		const FVector &InTranslation,
		const FVector &InScale3D);

	FVector FromGeoCoordinateSystem(const FVector &inPt) override;

	FVector ToGeoCoordinateSystem(const FVector &inPt) override;

private:

	//通过椭球笛卡尔坐标系xyz返回椭球上经纬度，高度值，有效位6位
	FVector ToGeography3F(const FVector &inPosition);

	Vector3D ScaleToGeographicSurface(const FVector &inPosition);

	//通过经纬度，高度值，计算椭球笛卡尔坐标系中xyz值，有效位6位
	FVector ToVector3F(const Geographic3D &inPosition);

	//通过经纬度坐标，计算该点处的椭球表面法线
	Vector3D GeodgraphicSurfaceNormal(const FVector &inPosition);

	Vector3D GeodgraphicSurfaceNormal(const Vector3D &inPosition);

	Vector3D GeodgraphicSurfaceNormal(const Geographic3D &inPosition);

	//通过经纬度，计算椭球笛卡尔坐标系中xyz值，高度值取地表0，有效位6位
	FVector ToVector3F(const Geographic2D &inPosition);

	Geographic2D ToGeographic2D(Vector3D &positionOnEllipsoid);
};

//定义平面坐标系统类，继承自CoordinateSystem，假想将地球经纬度坐标延展到矩形平面上
class Plane_CoordinateSystem :CoordinateSystem
{
	Plane_CoordinateSystem(const FRotator& InRotation,
		const FVector &InTranslation,
		const FVector &InScale3D);

	FVector FromGeoCoordinateSystem(const FVector &inPt);

	FVector ToGeoCoordinateSystem(const FVector &inPt);
};