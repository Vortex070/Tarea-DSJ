#include "UpdateManager.h"

UpdateManager UpdateManager::Start()
{
	Sleep(1000);
	std::cout << "Update Start\n";
	return UpdateManager();
}

UpdateManager UpdateManager::Run()
{
	Sleep(1000);
	std::cout << "Update Run\n";
	return UpdateManager();
}

UpdateManager UpdateManager::ShutDown()
{
	Sleep(1000);
	std::cout << "Update Shut Down\n";
	return UpdateManager();
}
