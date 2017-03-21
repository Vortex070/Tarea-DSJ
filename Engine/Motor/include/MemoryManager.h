#pragma once
#include <iostream>
#include <Windows.h>

class MemoryManager
{
public:
	static MemoryManager instance()
	{
		static MemoryManager *memory = new MemoryManager();
		return *memory;
	}

	static MemoryManager Start();
	static MemoryManager Run();
	static MemoryManager ShutDown();

private:
	MemoryManager() {}
};