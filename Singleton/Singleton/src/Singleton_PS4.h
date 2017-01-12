#pragma once 

#include "Singleton.h"
#include <iostream>


class Singleton_PS4 : public Singleton
{
public:
	std::string read(const std::string& filename)
	{
		return "soy PS4\n";
	};

	void write(const std::string& filename, const std::string& content)
	{

	};
};