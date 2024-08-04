/*

Prime Number
2
3 + 2


5  +
5 11 17 23 29 35 41 47 53

2501

*/
#include<stdio.h>
#include<stdlib.h>
#define FACTOR_NOT_FOUND 0
#define FACTOR_FOUND 1

int main()
{
    long long int number;
    long long int cf;
    int factor_found_flag;
    number = 101111111111L;
    number = 1818116091619L;
    number = 22333555577777L;
    number = 123456789101213L;
    number = 3391382115599173L;
    factor_found_flag = FACTOR_NOT_FOUND;
    if ( number % 2 == 0 || number % 3  == 0)
        factor_found_flag = FACTOR_FOUND;
    else
    {
        for( cf = 5; cf * cf <= number; cf += 6)
        {
            if ( number % (cf) == 0 || number % (cf+2)==0)
            {
                factor_found_flag = FACTOR_FOUND;
                break;
            }
        }

    }
        if ( factor_found_flag == FACTOR_NOT_FOUND )
            printf("Prime");
        else
            printf("Composite");
    return EXIT_SUCCESS;
}
