#pragma once
#include <iostream>
#include "singleton.h"

class Personaje {
public:
	Singleton *singleton;
	virtual void init() { singleton = Singleton::getInstance(); };
	virtual void run() {};
	Personaje() {
		init();
	}
};

class Personaje1 : public Personaje {
public:
	void init() {
		singleton = Singleton::getInstance();
	}

	void run() {
		for (int i = 0; ; ++i) {			
			int lastValue, newValue;
			singleton->addToPointsAndGetLast(lastValue, newValue, -1);

			//La condicion no debe de ser verdader nunca si nuestra
			//tecnica de acceso es efectiva
			if (lastValue-1 != newValue)
				std::cout << "UPSS !!! Personaje: puntos tendria que valer " 
							<< lastValue-1 << "pero vale "
							<< newValue << "\n";

			//simulamos un proceso posterior 
			std::this_thread::sleep_for(std::chrono::milliseconds(25));
 		}
	}
};

class Enemigo1 : public Personaje {
public:	
	void init() {
		singleton = Singleton::getInstance();
	}

	void run() {
		for (int i = 0; ; ++i) {
			int lastValue, newValue;
			singleton->addToPointsAndGetLast(lastValue, newValue, +1);

			//La condicion no debe de ser verdader nunca si nuestra
			//tecnica de acceso es efectiva
			if (lastValue+1 != newValue)
				std::cout << "UPSS !!! Enemigo: puntos tendria que valer "
				<< lastValue + 1 << "pero vale "
				<< newValue << "\n";

			//simulamos un proceso posterior 
			std::this_thread::sleep_for(std::chrono::milliseconds(25));
		}
	}
};