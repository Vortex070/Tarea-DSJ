#pragma once
#include <iostream>
#include <Windows.h>
#include <string.h>



using namespace std;

class Singleton
{
	public: 
		static Singleton* instance();

		virtual std::string read(const std::string& filename) = 0;
		virtual void write(const std::string& filename, const std::string& content) = 0;

protected:
	Singleton() {}
};