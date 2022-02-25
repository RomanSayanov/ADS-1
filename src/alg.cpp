// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    bool f = true;
    int i = value;
    for (int z = 1; z < i; z++) {
	    if (z != i && z != 1) {
		    if (i % z == 0) {
			    f = false;
		    }
	    }
    }
    return f;
}

uint64_t nPrime(uint64_t n) {
    int i = n;
    int f = 1;
    int cou = 0;
    while (cou != i) {
	f++;
	    if (checkPrime(f) == 1) {
		    cou++;
	    }
    }
    return f;
}

uint64_t nextPrime(uint64_t value) {
    int i = value;
    bool f = false;
    while (f != true) {
	    i++;
	    if (checkPrime(i) == true) {
		    return i;
		    break;
	    }
    }
    return i;
}

uint64_t sumPrime(uint64_t hbound) {
    int i = hbound;
    int sum = 0;
    for (int z = 2; z != i; z++) {
	    if (checkPrime(z) == true) {
		    sum += z;
	    }
    }
    return sum;
}
