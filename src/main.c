#include<immintrin.h>
#include<stdint.h>

// raw int = 3372651068 for example
unsigned int RDSEEDgetRawInt() {
    unsigned int rand; // some kind of variable
    do{} while( !_rdseed32_step(&rand) ); // do until success
    return rand;
}

// makes integer from RDSEEDgetRawInt() smaller, for example 1136
unsigned int RDSEEDgetInt() {
    unsigned int result = RDSEEDgetRawInt();
    result = result % 4096;
    return result;
}
