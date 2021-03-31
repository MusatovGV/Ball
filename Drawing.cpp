#include "Drawing.hpp"
#include "C:/Users/Георгий/Downloads/TX/TXLib.h" 
#include "Vector.hpp"

Drawing::Drawing(int wight, int hight) :
	wight_(wight),
	hight_(hight),
	Video_memory_(NULL)
{}

void Drawing::draw_pixel(Vector coords, Vector color_of_point) 
{
	RGBQUAD* pixel = &Video_memory_[(wight_ - (int)coords.y_) * hight_ + (int)coords.x_];
	pixel->rgbRed = color_of_point.x_;
	pixel->rgbGreen = color_of_point.y_;
	pixel->rgbBlue = color_of_point.z_;
}