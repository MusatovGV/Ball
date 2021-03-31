#pragma once

class Vector
{
public:
	double x_, y_, z_;
	Vector(double x, double y, double z);
	Vector(double x);
	Vector operator * (const Vector& vec)const;
	Vector operator + (const Vector& vec)const;
	Vector& operator += (const Vector& vec);
};


