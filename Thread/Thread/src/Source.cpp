#include <thread>
#include <chrono>
#include <iostream>
#include <Windows.h>
#include <conio.h>

bool mexit = false;
int life = 10;

void DecLife()
{
	while (!mexit) {
		std::cout << "Decrease Life\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		--life;
	}

}

void IncLife()
{
	while (!mexit) {
		std::cout << "Increase Life\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		++life;
	}
}

void main(void)
{
	std::thread t1;
	std::thread t2;

	int c = 0;
	while (1)
	{
		c = 0;

		switch ((c = _getch()))
		{
		case 80:
			t1 = std::thread(DecLife);
			//std::cout << std::endl << "Up" << std::endl;//key up
			break;
		case 72:
			t2 = std::thread(IncLife);
			//std::cout << std::endl << "Down" << std::endl;   // key down
			break;
		default:
			std::cout << std::endl << "null" << std::endl;  // not arrow
			break;
		}

	}

	if (life <= 0)
	{
		std::cout << "Dead\n";
	}
	else
	{
		std::cout << "Alive\n";
	}

	std::this_thread::sleep_for(std::chrono::seconds(5));
	mexit = true;
	t2.join();
	t1.join();
	std::cout << "Terminando main thread\n";
	//t1.join();
	//getchar();
	int x = 1;
	x++;
}