// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    bool f = true;
    uint64_t i = value;
    for (uint64_t z = 1; z < i; z++) {
	if (z != i && z != 1) {
		if (i % z == 0) {
			f = false;
			break;
		}
	}
    }
    if (f == true) {
	return f;
    }
    return 0;
}

uint64_t nPrime(uint64_t n) {
    uint64_t i = n;
    uint64_t f = 1;
    uint64_t cou = 0;
    while (cou != i) {
        f++;
	if (checkPrime(f) == 1) {
	    cou++;
        }
    }
    return f;
}

uint64_t nextPrime(uint64_t value) {
    uint64_t i = value;
    bool f = false;
    while (f != true) {
	i++;
	if (checkPrime(i) == true) {
		return i;
	}
    }
    return 0;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t i = hbound;
    uint64_t sum = 0;
    for (uint64_t z = 2; z != i; z++) {
	if (z % 2 == 0 && z != 2) {
	    	continue;
	} else {
	    if (checkPrime(z) == true) {
	        sum += z;
	    }
	}
    }
    return sum;
}
