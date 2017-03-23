#pragma once
#include "..\include\TPool.h"

class TObj : public TPool
{
	TPool*ptp = ptp->instance();
	std::thread *pThread;

public:
	void run(std::function<void()> f);
};