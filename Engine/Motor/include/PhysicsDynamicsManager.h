#pragma once
#include <iostream>
#include <Windows.h>
class PhysicsDynamicsManager
{
public:
	static PhysicsDynamicsManager instance()
	{
		static PhysicsDynamicsManager *physicsDynamic = new PhysicsDynamicsManager();
		return *physicsDynamic;
	}

	PhysicsDynamicsManager Start();
	PhysicsDynamicsManager Run();
	PhysicsDynamicsManager ShutDown();

private:
	PhysicsDynamicsManager() {}
};