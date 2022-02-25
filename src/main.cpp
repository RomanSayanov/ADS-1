// Copyright 2022 NNTU-CS
#include <iostream>
#include <cstdint>
#include "alg.h"

int main() {
	int h = checkPrime(3);
	int h1 = nPrime(2);
	int h2 = nextPrime(10);
	int h3 = sumPrime(14);
	std::cout << h << std::endl;
	std::cout << h1 << std::endl;
	std::cout << h2 << std::endl;
	std::cout << h3 << std::endl;
}

