#pragma once
#include "Particle.h"

class ParticlePool
{
public:  
	void create(double x, double y, double xVel, double yVel, int lifetime);  
	void animate();
	ParticlePool();

private:  
	static const int POOL_SIZE = 100;  
	Particle particles_[POOL_SIZE];
	Particle* firstAvailable_;
};

