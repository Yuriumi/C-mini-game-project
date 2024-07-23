#include <easyx.h>

int main()
{
	initgraph(1280, 720);

	bool running = true;

	ExMessage msg;

	BeginBatchDraw();
	while (running)
	{
		DWORD start_time = GetTickCount();

		while (peekmessage(&msg))
		{

		}

		cleardevice();
		FlushBatchDraw();

		DWORD end_time = GetTickCount();
		DWORD delta_time = end_time - start_time;
		if (delta_time < 1000 / 144)
		{
			Sleep(1000 / 144 - delta_time);
		}
	}
	EndBatchDraw();
	closegraph();
	return 0;
}