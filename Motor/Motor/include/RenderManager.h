#pragma once
#include <iostream>
#include <Windows.h>
class RenderManager
{
public:
	static RenderManager instance()
	{
		static RenderManager *render = new RenderManager();
		return *render;
	}
	RenderManager Start();
	RenderManager Run();
	RenderManager ShutDown();
private:
	RenderManager() {}
};