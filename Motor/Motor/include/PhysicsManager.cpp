#include "PhysicsManager.h"

PhysicsManager PhysicsManager::Start()
{
	Sleep(1000);
	std::cout << "Physics Start\n";
	return PhysicsManager();
}

PhysicsManager PhysicsManager::Run()
{
	Sleep(1000);
	std::cout << "Physics Run\n";
	return PhysicsManager();
}

PhysicsManager PhysicsManager::ShutDown()
{
	Sleep(1000);
	std::cout << "Physics Shut Down\n";
	return PhysicsManager();
}
