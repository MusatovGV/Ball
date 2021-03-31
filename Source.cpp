#include <stdlib.h>
#include "C:/Users/Георгий/Downloads/TX/TXLib.h" 
#include "Ball.hpp"
#include "Vector.hpp"
#include "Drawing.hpp"



int main() 
{

	Drawing drawing(800, 800);

	
	txCreateWindow(drawing.wight_, drawing.hight_);
	drawing.Video_memory_ = txVideoMemory();
	Ball ball(Vector{ 400, 300, 0 }, Vector{ 0, 0, 255 }, 50, 1);
	//ball.draw(window1);
	

	

	while (!txGetAsyncKeyState(VK_ESCAPE))
	{
		txBegin();
		txClear();
		ball.move();
		ball.draw(drawing);
		txEnd();
	}

	
}