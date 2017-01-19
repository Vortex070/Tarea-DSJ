#pragma once
#include <iostream>
#include <Windows.h>
class PhysicsManager
{
public:
	static PhysicsManager instance()
	{
		static PhysicsManager *physics = new PhysicsManager();
		return *physics;
	}

	PhysicsManager Start();
	PhysicsManager Run();
	PhysicsManager ShutDown();

private:
	PhysicsManager() {}
};