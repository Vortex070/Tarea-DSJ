#include "MemoryManager.h"

MemoryManager MemoryManager::Start()
{
	Sleep(1000);
	std::cout << "Memory Start\n";
	return MemoryManager();
}

MemoryManager MemoryManager::Run()
{
	Sleep(1000);
	std::cout << "Memory Run\n";
	return MemoryManager();
}

MemoryManager MemoryManager::ShutDown()
{
	Sleep(1000);
	std::cout << "Memory Shut Down\n";
	return MemoryManager();
}
