#pragma once
#include "Vector.hpp"
#include "C:/Users/Георгий/Downloads/TX/TXLib.h" 
#include "Drawing.hpp"

class Ball
{
	Vector cords_, color_;
	double r_, fric_;
public:
	Ball(Vector cords, Vector color, double r, double fric);
	void draw(Drawing drawing);
	void move();

};

