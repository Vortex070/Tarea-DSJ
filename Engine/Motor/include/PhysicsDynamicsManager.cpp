#include "PhysicsDynamicsManager.h"

PhysicsDynamicsManager PhysicsDynamicsManager::Start()
{
	Sleep(1000);
	std::cout << "Physics Dynamics Start\n";
	return PhysicsDynamicsManager();
}

PhysicsDynamicsManager PhysicsDynamicsManager::Run()
{
	Sleep(1000);
	std::cout << "Physics Dynamics Run\n";
	return PhysicsDynamicsManager();
}

PhysicsDynamicsManager PhysicsDynamicsManager::ShutDown()
{
	Sleep(1000);
	std::cout << "Physics Dynamics Shut Down\n";
	return PhysicsDynamicsManager();
}
