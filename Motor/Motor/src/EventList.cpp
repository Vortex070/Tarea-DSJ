#include "..\include\EventList.h"
#include "..\include\GamePad.h"

bool EventList::Callback()
{
	switch (type)
	{
		case 1:
			cout << "I'm 1\n";
			return true;
		case 2:
			cout << "I'm 2\n";
			return true;
		case 3:
			cout << "I'm 3\n";
			return true;
		case 4:
			cout << "I'm 4\n";
			return true;
		case 5:
			cout << "I'm 5\n";
			return true;

	}
}
