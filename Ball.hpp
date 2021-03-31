#pragma once
#include "Vector.hpp"
#include "C:/Users/Георгий/Downloads/TX/TXLib.h" 
#include "Drawing.hpp"
#include <ctime>

class Ball
{
	Vector cords_, velocity_, fusion_, color_;
	double r_, fric_, weight_;
public:
	Ball(Vector cords, Vector velocity, Vector fusion, Vector color, double r, double fric, double weight);
	void draw(Drawing drawing);
	void move(time_t t);
	void acceleration(time_t t);

};

