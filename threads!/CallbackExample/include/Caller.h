#pragma once

#include <thread>
#include <chrono>
#include <functional>
#include <vector>
#include <mutex>

typedef std::function<bool()> Callback;

class Caller
{
private:
	int _index;
	std::vector<Callback> _aCallbacks;
	std::mutex _mutexCallbacks;

	bool isEmpty()
	{
		bool empty;
		_mutexCallbacks.lock();
		empty = _aCallbacks.size() == 0;
		_mutexCallbacks.unlock();

		return empty;
	}

public:

	Caller() : _index(0)
	{}

	void addCallback(Callback func)
	{
		_mutexCallbacks.lock();
		_aCallbacks.push_back(func);
		_mutexCallbacks.unlock();
	}

	void eventLoop()
	{
		while (1)
		{
			if (!isEmpty())
			{
				_aCallbacks[_index]();

				_mutexCallbacks.lock();
				_index = (_index + 1) % _aCallbacks.size();
				_mutexCallbacks.unlock();
			}
			std::this_thread::sleep_for(std::chrono::milliseconds(20));
		}
	}

};