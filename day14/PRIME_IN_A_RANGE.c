#include<stdio.h>
#include<stdlib.h>
#define RANGE 10000000
#define TRUE 1
#define FALSE 0
int main()
{
    int num;
    int cf;
    int until;
    int primeCtr;
    int factor_found_flag;
    primeCtr = 2;
    for ( num = 5; num <= RANGE ; num += 2)
    {
        factor_found_flag = FALSE;
        if ( num % 2 ==0 || num % 3 == 0)
            factor_found_flag = TRUE;
        else
        {
        for( cf = 5 ; cf * cf <= num; cf += 6)
        {
            if ( num % cf == 0 || num % (cf+2) == 0)
                factor_found_flag = TRUE;
        }
        }
        if ( factor_found_flag == FALSE)
        {
        //    printf("%d ", num);
            primeCtr += 1;
        }
    }
    printf("1 to %d has %d primes", RANGE, primeCtr );

    return EXIT_SUCCESS;
}
