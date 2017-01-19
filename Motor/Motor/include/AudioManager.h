#pragma once
#include<iostream>
#include <Windows.h>

class AudioManager
{
public:
	static AudioManager instance()
	{
		static AudioManager *audio = new AudioManager();
		return *audio;
	}

	AudioManager Start();
	AudioManager Run();
	AudioManager ShutDown();

private:
	AudioManager() {}
};