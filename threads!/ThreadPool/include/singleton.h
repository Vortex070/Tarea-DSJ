#pragma once

#include <mutex>

class Singleton {
private:
	Singleton();
	static Singleton* _instance;
	std::mutex _lock;

public:
	static Singleton* getInstance();
};