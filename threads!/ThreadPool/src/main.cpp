
#include "ThreadPool.h"
#include "Threadable.h"
#include <iostream>
#include <string>
#include <chrono>

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

class EjemploInstanciaThread : Threadable
{
public: 
	std::string _name;

	void setName(const int& i) 
	{
		_name = std::to_string(i);
	}

	void update() 
	{
		while (1)
		{
			std::cout << "updating " << _name << "\n";
			std::this_thread::sleep_for(std::chrono::milliseconds(20));
		}
	}
	
};

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

ThreadPool threadPool;
#define NUMTHREADS 5

void main(void)
{
	for (int i = 0; i < NUMTHREADS; ++i)
	{
		EjemploInstanciaThread *e = new EjemploInstanciaThread();
		e->setName(i);
		std::thread *thread = new std::thread(&EjemploInstanciaThread::update, e);
		threadPool._pool.push_back(thread);
	}

	for (int i = 0; i < threadPool._pool.size(); ++i)
	{
		threadPool._pool.at(i)->join();
	}
}
