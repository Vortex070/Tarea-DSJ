#pragma once
#include <iostream>
#include <Windows.h>
class VideoManager
{
public:
	static VideoManager instance()
	{
		static VideoManager *video = new VideoManager();
		return *video;
	}

	VideoManager Start();
	VideoManager Run();
	VideoManager ShutDown();

private:
	VideoManager() {}
};