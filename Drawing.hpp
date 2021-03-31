#pragma once
#include "C:/Users/Георгий/Downloads/TX/TXLib.h"
#include "Vector.hpp"

class Drawing
{
public:
	int width_, height_;
	RGBQUAD* Video_memory_;
	Drawing(int width, int height);

	void draw_pixel(Vector coords, Vector color_of_point);

};

