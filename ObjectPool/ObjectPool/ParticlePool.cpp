#include "ParticlePool.h"

void ParticlePool::create(double x, double y, double xVel, double yVel, int lifetime)
{
/*	// Find an available particle.  
	for (int i = 0; i < POOL_SIZE; i++)  
	{   
		if (!particles_[i].inUse())    
		{      
			particles_[i].init(x, y, xVel, yVel, lifetime);      
			return;    
		}  
	}*/
	// Make sure the pool isn't full.  
	assert(firstAvailable_ != NULL);  
	// Remove it from the available list.  
	Particle* newParticle = firstAvailable_;  
	firstAvailable_ = newParticle->getNext();  
	newParticle->init(x, y, xVel, yVel, lifetime);
}

void ParticlePool::animate()
{
	for (int i = 0; i < POOL_SIZE; i++) 
	{
		if (particles_[i].animate()) 
		{      
			// Add this particle to the front of the list.      
			particles_[i].setNext(firstAvailable_);      
			firstAvailable_ = &particles_[i];    
		}  
	}
}

ParticlePool::ParticlePool() 
{  
	// The first one is available.  
	firstAvailable_ = &particles_[0];  
	// Each particle points to the next.  
	for (int i = 0; i < POOL_SIZE - 1; i++)  
	{    
		particles_[i].setNext(&particles_[i + 1]);  
	}  
	// The last one terminates the list.  
	particles_[POOL_SIZE - 1].setNext(NULL); 
}