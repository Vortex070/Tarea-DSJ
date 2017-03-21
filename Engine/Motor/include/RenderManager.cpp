#include "RenderManager.h"

RenderManager RenderManager::Start()
{
	Sleep(1000);
	std::cout << "Render start\n";
	return RenderManager();
}

RenderManager RenderManager::Run()
{
	Sleep(1000);
	std::cout << "Render Run\n";
	return RenderManager();
}

RenderManager RenderManager::ShutDown()
{
	Sleep(1000);
	std::cout << "Render Shut Down\n";
	return RenderManager();
}
