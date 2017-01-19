#pragma once
#include <iostream>
#include <Windows.h>

class AnimationManager
{
public:
	static AnimationManager instance()
	{
		static AnimationManager *animate = new AnimationManager();
		return *animate;
	}

	static AnimationManager Start();
	static AnimationManager Run();
	static AnimationManager ShutDown();

private:
	AnimationManager() {}
};