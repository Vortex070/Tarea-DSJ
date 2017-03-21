#pragma once
#include <iostream>
#include <Windows.h>
class TextureManager
{
public:
	static TextureManager instance()
	{
		static TextureManager *texture = new TextureManager();
		return *texture;
	}

	TextureManager Start();
	TextureManager Run();
	TextureManager ShutDown();

private:
	TextureManager() {}
};