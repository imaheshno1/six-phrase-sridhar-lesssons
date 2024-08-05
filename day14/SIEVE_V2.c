#include<stdio.h>
#include<stdlib.h>
#define RANGE 10000000

#define COMPOSITE 1
#define PRIME 0
    char numbers [ RANGE ] = { PRIME };

int main()
{
    numbers [ 0 ] = COMPOSITE;
    numbers [ 1 ] = COMPOSITE;
    int multiples;
    int compositeCtr;

    for( multiples = 4; multiples < RANGE ; multiples+=2)
    {
        numbers [ multiples ] = COMPOSITE;
    }
    compositeCtr = RANGE / 2;
    int primes;
    int inc;
    for( primes = 3; primes * primes < RANGE ; primes += 2)
    {
        if ( numbers [ primes ] == PRIME)
        {
            inc = primes << 1;
        for( multiples = primes * primes ; multiples < RANGE ; multiples += inc )
        {
            if ( numbers [ multiples ] == PRIME )
            {
            numbers [ multiples ] = COMPOSITE;
            compositeCtr += 1;
            }
        }
        }
    }
    int ind;
    int primeCtr;
    primeCtr = 0;
   /* for( ind = 2; ind < RANGE ; ind += 1)
    {
        if ( numbers [ ind ] == PRIME )
            primeCtr+=1;
    }*/
    primeCtr = RANGE - compositeCtr;
    printf("1 to %d has %d Primes", RANGE, primeCtr);
return EXIT_SUCCESS;
}
