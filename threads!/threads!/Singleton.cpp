#include "singleton.h"
#include <iostream>

Singleton* Singleton::_instance = 0;

Singleton* Singleton::getInstance() {
	if (Singleton::_instance == 0)
		Singleton::_instance = new Singleton();

	return _instance;
}


Singleton::Singleton() : puntos(0) {
	
}

void Singleton::setPuntos(int p) {
	_lock.lock();
	puntos = p;
	_lock.unlock();
}


int Singleton::getPuntos() {
	_lock.lock();
	int p = puntos;
	_lock.unlock();
	
	return p;
}


/**
	Esta funcion se asegura dee obtener el valor anterior y nuevo de
	los puntos, evitando completamente el problema de colision en el acceso
*/
void Singleton::addToPointsAndGetLast(	int& lastValue,
										int& newValue,
										const int& increment) {
	_lock.lock();
	lastValue = puntos;
	puntos += increment;
	newValue = puntos;
	std::cout << "puntos " << puntos << "\n";
	_lock.unlock();

}