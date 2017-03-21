#include "TextureManager.h"

TextureManager TextureManager::Start()
{
	Sleep(1000);
	std::cout << "Texture Start\n";
	return TextureManager();
}

TextureManager TextureManager::Run()
{
	Sleep(1000);
	std::cout << "Texture Run\n";
	return TextureManager();
}

TextureManager TextureManager::ShutDown()
{
	Sleep(1000);
	std::cout << "Texture Shut Down\n";
	return TextureManager();
}
