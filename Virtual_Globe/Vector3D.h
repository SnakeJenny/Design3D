// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 *
 */
class Vector3D
{
public:
	Vector3D();

	Vector3D(double x, double y, double z);

	Vector3D(FVector &inFVector);

	~Vector3D();

	static Vector3D Zero();
	static Vector3D UnitX();
	static Vector3D UnitY();
	static Vector3D UnitZ();

	/**
	 * Get the length (magnitude) of this vector.
	 *
	 * @return The length of this vector.
	 */
	double Magnitude() const;

	double MagnitudeSquared() const;

	Vector3D Normalize() const;


	FVector ToVector3F();

	Vector3D operator*(double Scale) const;

	Vector3D operator/(double Scale) const;

	Vector3D operator*(const Vector3D& V) const;

	//Vector3D operator*(float Scale, const Vector3D& V);

	Vector3D operator+(const Vector3D& V) const;

	Vector3D operator-(const Vector3D& V) const;

	Vector3D MultiplyComponents(Vector3D scale);

	Vector3D Multiply(double Scale);

	double Dot(Vector3D other);

	Vector3D& operator=(const Vector3D& Other);


public:

	/** Vector's X component. */
	double X;

	/** Vector's Y component. */
	double Y;

	/** Vector's Z component. */
	double Z;
};