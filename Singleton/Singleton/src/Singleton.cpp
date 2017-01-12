#include "Singleton.h"

#include "Singleton_PS3.h"
#include "Singleton_PS4.h"

Singleton* Singleton::instance()
{
	static Singleton* _instance;

#ifdef PS3
	_instance = (Singleton*)new Singleton_PS3();
#elif PS4
	_instance = (Singleton*)new Singleton_PS4();
#endif

	return _instance;
}