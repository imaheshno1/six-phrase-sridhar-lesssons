#include<stdio.h>
#include<stdlib.h>
#define RANGE 10000000

#define COMPOSITE 1
#define PRIME 0
    int numbers [ RANGE ] = { PRIME };

int main()
{
    numbers [ 0 ] = COMPOSITE;
    numbers [ 1 ] = COMPOSITE;
    int multiples;
    for( multiples = 4; multiples < RANGE ; multiples+=2)
    {
        numbers [ multiples ] = COMPOSITE;
    }
    int primes;
    for( primes = 3; primes * primes < RANGE ; primes += 2)
    {
        for( multiples = primes * primes ; multiples < RANGE ; multiples += primes )
        {
            numbers [ multiples ] = COMPOSITE;
        }
    }
    int ind;
    int primeCtr;
    primeCtr = 0;
    for( ind = 2; ind < RANGE ; ind += 1)
    {
        if ( numbers [ ind ] == PRIME )
            primeCtr+=1;
    }
    printf("1 to %d has %d Primes", RANGE, primeCtr);
return EXIT_SUCCESS;
}
