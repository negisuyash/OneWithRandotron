#include <iostream>

using namespace std;

#define bigNumber unsigned long long int

// LCG(Linear Congruential Generator) and MCG(Multiplicative Congruential Generator) for generating pseudo-randomized numbers

// A = 22695477, B = 1, M = 2^32

bigNumber borlandCRandom(bigNumber x0 = 1ULL,bool mcg = false){
    bigNumber m = 1ULL << 32;
    if(mcg)
       return (22695477ULL * x0) % m; 
    return (22695477ULL * x0 + 1ULL) % m;
}

// A = 214013, B = 2531011, M = 2^32

bigNumber microsoftVisualRandom(bigNumber x0 = 1ULL, bool mcg = false){
    bigNumber m= 1ULL << 32;
    if(mcg)
        return (214013ULL * x0) % m;
    return (214013ULL * x0 + 2531011ULL) % m;
}

// A = 134775813, B = 1, M = 2^32 - 1 

bigNumber turboPascalRandom(bigNumber x0 = 1ULL, bool mcg = false){
    bigNumber m= 1ULL << 32;
    if(mcg)
        return (134775813ULL * x0) % (m - 1ULL);
    return (134775813ULL * x0 + 1ULL) % (m - 1ULL);
}
