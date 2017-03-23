#pragma once
#include <thread>
#include <iostream>
#include "..\include\Events.h"
#include "..\include\TObj.h"

class TPool
{
public:
	static TPool *instance()
	{
		static TPool *ptp = new TPool();
		return ptp;
		//porn is good
	}

	friend class TObj;
private:

	TPool() {}

};