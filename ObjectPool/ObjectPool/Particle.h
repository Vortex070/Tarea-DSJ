#pragma once
#include <Windows.h>
#include <assert.h>
#include <time.h>
#include <iostream>

class Particle
{
public:
	Particle() : framesLeft_(0) {}

	void init(double x, double y, double xVel, double yVel, int lifetime);

	bool animate();

	bool inUse() const;

	Particle* getNext() const;

	void setNext(Particle* next);

private:
	int framesLeft_;

	union
	{
		// State when it's in use.
		struct
		{
			double x_, y_;
			double xVel_, yVel_;
		} live;
		// State when it's available.
		Particle* next;
	} state_;
};
