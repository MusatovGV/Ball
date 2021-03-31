#include "C:/Users/Георгий/Downloads/TX/TXLib.h" 
#include "Ball.hpp"
#include "Vector.hpp"
#include "Drawing.hpp"
#include <ctime>



int main() 
{

	Drawing drawing(1980, 1080);

	
	txCreateWindow(drawing.width_, drawing.height_);
	drawing.Video_memory_ = txVideoMemory();
	Ball ball(Vector{ 400, 300, 0 }, Vector{ 0, 0, 0 }, Vector{ 0, 0, 0 }, Vector{ 0, 0, 255 }, 50, 1, 1);
	//ball.draw(window1);

	time_t t1 = time(NULL), t2 = 0;

	while (!GetAsyncKeyState(VK_ESCAPE))
	{
		t2 = time(NULL)-t1;
		t1 = time(NULL);
		txBegin();
		txClear();
		ball.move(t2);
		ball.draw(drawing);
		txEnd();

	}

	
}