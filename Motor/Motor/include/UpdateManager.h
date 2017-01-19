#pragma once
#include <iostream>
#include <Windows.h>
class UpdateManager
{
public:
	static UpdateManager instance()
	{
		static UpdateManager *update = new UpdateManager();
		return *update;
	}

	UpdateManager Start();
	UpdateManager Run();
	UpdateManager ShutDown();


private:
	UpdateManager() {}

};