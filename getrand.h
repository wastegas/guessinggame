#ifndef GETRAND_H
#define GETRAND_H

#include <random>

int getRand()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 10);
	return dis(gen);
}

#endif
