#include <easyx.h>
#include <iostream>

int main()
{
	initgraph(1280, 720);

	int mouseX{ 300 }, MouseY{ 300 };

	BeginBatchDraw();
	while (true)
	{
		ExMessage msg;
		while (peekmessage(&msg))
		{
			if (msg.message == WM_MOUSEMOVE)
			{
				mouseX = msg.x;
				MouseY = msg.y;
			}
		}

		cleardevice();
		solidcircle(mouseX, MouseY, 100);
		FlushBatchDraw();
	}
	EndBatchDraw();

	closegraph();
	return 0;
}