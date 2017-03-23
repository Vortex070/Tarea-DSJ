#include "..\include\TObj.h"

void TObj::run(std::function<void()> f)
{
	active = true;
	pThread = new std::thread(f);
	pThread.join();
	active = false;
	ptp->delete;

}
