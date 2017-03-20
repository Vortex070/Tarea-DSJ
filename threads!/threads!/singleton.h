#pragma once

#include <mutex>

class Singleton {
private:
	Singleton();
	static Singleton* _instance;
	std::mutex _lock;
	int puntos;

public: 
	static Singleton* getInstance();
	void setPuntos(int p);
	int getPuntos();

	/**
	Esta funcion se asegura dee obtener el valor anterior y nuevo de
	los puntos, evitando completamente el problema de colision en el acceso
	*/
	void addToPointsAndGetLast(	int &lastValue,
								int& newValue, 
								const int& increment);
};