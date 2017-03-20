#include <thread>
#include <chrono>
#include <iostream>
#include "Threadable.h"



void func1() {
	for (int i = 0; i < 10; ++i) {
		std::cout << "soy func1\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
}


void func2() {
	for (int i = 0; i < 10; ++i) {
		std::cout << "soy func2\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
}


void main(void) {
	//std::thread t1(func1);
	//std::thread t2(func2);

	Personaje1 personaje1;
	Enemigo1 enemigo1;

	std::thread tEnemigo1(&Personaje::run, &enemigo1);
	std::thread tPersonaje1(&Personaje::run, &personaje1);
	
	std::cout << "lanzados 2 threads\n";
	tPersonaje1.join();
	tEnemigo1.join();
	//t3.join();

	std::cout << "terminado todo\n";
	std::cout << "terminado todo\n";
}