#pragma once

class Threadable 
{
public:
	virtual void init() {}
	virtual void update() {}
	Threadable() {
		init();
	}
};
