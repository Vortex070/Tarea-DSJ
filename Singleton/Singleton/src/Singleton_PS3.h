#pragma once 

#include "Singleton.h"
#include <iostream>


class Singleton_PS3 : public Singleton
{
public:
	std::string read(const std::string& filename)
	{
		return "soy PS3\n";
	};

	void write(const std::string& filename, const std::string& content)
	{

	};
};