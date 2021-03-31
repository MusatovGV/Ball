#include "Ball.hpp"
#include "C:/Users/Георгий/Downloads/TX/TXLib.h" 
#include "Drawing.hpp"
#include <ctime>
#include "Vector.hpp"


Ball::Ball(Vector cords, Vector velocity, Vector fusion, Vector color, double r, double fric, double weight) :
	cords_(cords),
	velocity_(velocity),
	fusion_(fusion),
	color_(color),
	r_(r),
	fric_(fric),
	weight_(weight)
{}

void Ball::draw	(Drawing drawing)
{
	//txCreateWindow(900, 700);
	for (double x = cords_.x_ - r_; x < cords_.x_ + r_; ++x)
	{
		for (double y = cords_.y_ - r_; y < cords_.y_ + r_; ++y)
		{
			if (((x - cords_.x_) * (x - cords_.x_) + (y - cords_.y_) * (y - cords_.y_) <= r_ * r_)&&(x>0) && (x<1980) && (y>0) && (y<1080))
			{
				drawing.draw_pixel({ x, y, 0 }, color_);
				//txSetPixel(x, y, RGB(color_.x_, color_.y_, color_.z_), window);
				//txSetPixel(x, y, RGB(color_.x_, color_.y_, color_.z_));
			}
		}
	}
}

void Ball::move(time_t t)
{
	if (GetAsyncKeyState('D'))
	{
		fusion_.x_ = 1;
	}
	if (GetAsyncKeyState('A'))
	{
		fusion_.x_ = -1;
	}
	if (GetAsyncKeyState('W'))
	{
		fusion_.y_ = -1;
	}
	if (GetAsyncKeyState('S'))
	{
		fusion_.y_ = 1;
	}
	acceleration(t);
	cords_ += velocity_ * t;
}

void Ball::acceleration(time_t t)
{
	velocity_ += Vector(t / weight_) * fusion_;
}