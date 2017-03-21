#pragma once
#include <thread>
#include <iostream>
#include "..\include\Events.h"

class TPool
{
public:
	static TPool instance()
	{
		static TPool *ptp = new TPool();
		return *ptp;
	}

private:
	TPool() {}

};