#include "Vector.hpp"

Vector::Vector(double x, double y, double z) :
	x_(x),
	y_(y),
	z_(z)
{}

Vector::Vector(double x):
	x_(x),
	y_(x),
	z_(x)
{}


Vector Vector::operator * (const Vector& vec1)const
{
	return{ (*this).x_ * vec1.x_, (*this).y_ * vec1.y_,(*this).z_ * vec1.z_ };
}

Vector Vector::operator + (const Vector& vec1)const
{
	return{ (*this).x_ + vec1.x_, (*this).y_ + vec1.y_,(*this).z_ + vec1.z_ };
}

Vector& Vector::operator += (const Vector& vec1)
{
	(*this).x_ += vec1.x_;
	(*this).y_ += vec1.y_;
	(*this).z_ += vec1.z_;
	return (*this);
}