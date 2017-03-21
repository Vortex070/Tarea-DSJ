#include "VideoManager.h"

VideoManager VideoManager::Start()
{
	Sleep(1000);
	std::cout << "Video Start\n";
	return VideoManager();
}

VideoManager VideoManager::Run()
{
	Sleep(1000);
	std::cout << "Video Run\n";
	return VideoManager();
}

VideoManager VideoManager::ShutDown()
{
	Sleep(1000);
	std::cout << "Video Shut Down\n";
	return VideoManager();
}
