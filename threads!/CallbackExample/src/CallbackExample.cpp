#include "Caller.h"
#include <iostream>

#define SLEEP_PLEASE(MILLIS) std::this_thread::sleep_for(std::chrono::milliseconds(MILLIS))

bool f1()
{
	std::cout << "soy f1()\n";
	return false;
}

bool f2()
{
	std::cout << "soy f2()\n";
	return false;
}

void main(void)
{
	Caller caller;

	std::thread callerThread(&Caller::eventLoop, &caller);
	SLEEP_PLEASE(5000);

	caller.addCallback(f1);
	SLEEP_PLEASE(5000);

	caller.addCallback(f2);

	callerThread.join();

}