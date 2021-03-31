#include "Ball.hpp"
#include "C:/Users/Георгий/Downloads/TX/TXLib.h" 
#include "Drawing.hpp"


Ball::Ball(Vector cords, Vector color, double r, double fric) :
	cords_(cords),
	color_(color),
	r_(r),
	fric_(fric)
{}

void Ball::draw	(Drawing drawing)
{
	//txCreateWindow(900, 700);
	for (double x = cords_.x_ - r_; x < cords_.x_ + r_; ++x)
	{
		for (double y = cords_.y_ - r_; y < cords_.y_ + r_; ++y)
		{
			if (((x - cords_.x_) * (x - cords_.x_) + (y - cords_.y_) * (y - cords_.y_) <= r_ * r_)&&(x>0) && (x<800) && (y>0) && (y<600))
			{
				drawing.draw_pixel({ x, y, 0 }, color_);
				//txSetPixel(x, y, RGB(color_.x_, color_.y_, color_.z_), window);
				//txSetPixel(x, y, RGB(color_.x_, color_.y_, color_.z_));
			}
		}
	}
}

void Ball::move()
{
	cords_.x_ = txMouseX();
	cords_.y_ = txMouseY();
}