#pragma once
#include "C:/Users/Георгий/Downloads/TX/TXLib.h"
#include "Vector.hpp"

class Drawing
{
public:
	int wight_, hight_;
	RGBQUAD* Video_memory_;
	Drawing(int wight, int hight);

	void draw_pixel(Vector coords, Vector color_of_point);

};

