#pragma once
#include <iostream>
#include <Windows.h>

class FileSystemManager
{
public:
	static FileSystemManager instance()
	{
		static FileSystemManager *file = new FileSystemManager();
		return *file;
	}
	FileSystemManager Start();
	FileSystemManager Run();
	FileSystemManager ShutDown();
private:
	FileSystemManager() {}
};