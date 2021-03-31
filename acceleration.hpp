#pragma once
#include "Vector.hpp"


class acceleration
{
public:
	Vector direction_;
	double value_;

	acceleration(Vector direction, double value);

	void seclaw();
};

