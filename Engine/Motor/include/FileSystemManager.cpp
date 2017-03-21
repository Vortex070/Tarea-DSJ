#include "FileSystemManager.h"

FileSystemManager FileSystemManager::Start()
{
	Sleep(1000);
	std::cout << "File System Start\n";
	return FileSystemManager();
}

FileSystemManager FileSystemManager::Run()
{
	Sleep(1000);
	std::cout << "File System Run\n";
	return FileSystemManager();
}

FileSystemManager FileSystemManager::ShutDown()
{
	Sleep(1000);
	std::cout << "File System Shut Down\n";
	return FileSystemManager();
}
