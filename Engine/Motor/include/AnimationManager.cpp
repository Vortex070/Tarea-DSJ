#include "AnimationManager.h"

AnimationManager AnimationManager::Start()
{
	Sleep(1000);
	std::cout << "Animator start\n";
	return AnimationManager();
}

AnimationManager AnimationManager::Run()
{
	Sleep(1000);
	std::cout << "Animator run\n";
	return AnimationManager();
}

AnimationManager AnimationManager::ShutDown()
{
	Sleep(1000);
	std::cout << "Animator shut down\n";
	return AnimationManager();
}
