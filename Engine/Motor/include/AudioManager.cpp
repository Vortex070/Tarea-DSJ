#include "AudioManager.h"

AudioManager AudioManager::Start()
{
	Sleep(1000);
	std::cout << "Audio Start\n";
	return AudioManager();
}

AudioManager AudioManager::Run()
{
	Sleep(1000);
	std::cout << "Audio Run\n";
	return AudioManager();
}

AudioManager AudioManager::ShutDown()
{
	Sleep(1000);
	std::cout << "Audio Shut Down\n";
	return AudioManager();
}
