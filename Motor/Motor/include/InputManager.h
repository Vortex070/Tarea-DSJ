#include "..\include\GamePad.h"
#include <queue>
#include <deque>
#include <list>
#include <iterator>
#include "..\include\Events.h"
#include "..\include\EventList.h"

class InputManager
{
public:
	static InputManager instance()
	{
		static InputManager *input = new InputManager();
		return *input;
	}

	EventList lTemp;
	Events qTemp;
	int eType = 1;
	bool start = false;
	
	InputManager Start();
	InputManager Run();
	InputManager ShutDown();
	InputManager Listener();
	InputManager Dispatcher();

	queue<Events> Tail;
	list<EventList> List;

private:
	InputManager() {}
};