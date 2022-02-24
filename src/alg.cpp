// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <iostream>

int checkPrime(uint64_t value) {
    int cou = 0;
    int i = 2;
    while (cou != value) {
        boolean f = false;
	for (int z = 1; z != i+1; z++) {
		if (z != 1 && z != i) {
			if (i % z == 0) {
			    f = true;
			    break;
			}
		}
	}
	if (f == false) {
	    cou++;
	}
	    i++;
    }
    return i-1;
}
