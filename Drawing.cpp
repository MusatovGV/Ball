#include "Drawing.hpp"
#include "C:/Users/Георгий/Downloads/TX/TXLib.h" 
#include "Vector.hpp"

Drawing::Drawing(int width, int height) :
	width_(width),
	height_(height),
	Video_memory_(NULL)
{}

void Drawing::draw_pixel(Vector coords, Vector color_of_point) 
{
	RGBQUAD* pixel = &Video_memory_[(height_ - (int)coords.y_) * width_ + (int)coords.x_];
	pixel->rgbRed = color_of_point.x_;
	pixel->rgbGreen = color_of_point.y_;
	pixel->rgbBlue = color_of_point.z_;
}