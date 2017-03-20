#include "ParticlePool.h"

int main()
{
	clock_t start, end;
	ParticlePool *particle;
	particle = new ParticlePool();

	start = clock();
	particle->create(10, 10, 5, 9, 4);
	particle->animate();
	end = clock();
	printf("Time: %f\n", (end - start) / CLK_TCK);
	delete particle;
	std::cin.get();
	return 0;
}