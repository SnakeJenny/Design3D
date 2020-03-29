// Fill out your copyright notice in the Description page of Project Settings.


#include "Vector3D.h"

Vector3D::Vector3D()
{
}

Vector3D::~Vector3D()
{
}

Vector3D Vector3D::Zero()
{
	return  Vector3D(0.0, 0.0, 0.0);
}

Vector3D Vector3D::UnitX()
{
	return  Vector3D(1.0, 0.0, 0.0); 
}

Vector3D Vector3D::UnitY()
{
	return Vector3D(0.0, 1.0, 0.0); 
}

Vector3D Vector3D::UnitZ()
{
	return Vector3D(0.0, 0.0, 1.0); 
}

Vector3D::Vector3D(double x, double y, double z)
{
	X = x;
	Y = y;
	Z = z;
}

Vector3D::Vector3D(FVector &inFVector)
{
	X = inFVector.X;
	Y = inFVector.Y;
	Z = inFVector.Z;
}

double Vector3D::Dot(Vector3D other)
{
	return X * other.X + Y * other.Y + Z * other.Z;
}

Vector3D Vector3D::MultiplyComponents(Vector3D scale)
{
	return Vector3D(X * scale.X, Y * scale.Y, Z * scale.Z);
}

Vector3D&  Vector3D::operator=(const Vector3D& Other)
{
	this->X = Other.X;
	this->Y = Other.Y;
	this->Z = Other.Z;
	return *this;
}

Vector3D Vector3D::operator+(const Vector3D& V) const
{
	return Vector3D(X + V.X, Y + V.Y, Z + V.Z);
}

Vector3D Vector3D::operator-(const Vector3D& V) const
{
	return Vector3D(X - V.X, Y - V.Y, Z - V.Z);
}

Vector3D Vector3D::operator/(double Scale) const
{
	return Vector3D(X / Scale, Y / Scale, Z / Scale);
}

	Vector3D Vector3D::operator*(double Scale) const
	{
		return Vector3D(X * Scale, Y * Scale, Z * Scale);
	}	

	/*Vector3D Vector3D::operator*(float Scale, const Vector3D& V)
	{
		return V.operator*(Scale);
	}*/

	Vector3D Vector3D::operator*(const Vector3D& V) const
	{
		return Vector3D(X * V.X, Y * V.Y, Z * V.Z);
	}
	
	FVector Vector3D::ToVector3F()
	{
		return FVector((float)X, (float)Y, (float)Z);
	}

	Vector3D  Vector3D::Multiply(double Scale)
	{
		return Vector3D(X * Scale, Y * Scale, Z * Scale);
	}

	double Vector3D::Magnitude() const
	{
		return FMath::Sqrt(MagnitudeSquared());
	}

	double Vector3D::MagnitudeSquared() const
	{
		return X * X + Y * Y + Z * Z; 
	}



	
