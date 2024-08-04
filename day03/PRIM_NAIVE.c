/*

Prime Number

*/
#include<stdio.h>
#include<stdlib.h>
#define FACTOR_NOT_FOUND 0
#define FACTOR_FOUND 1

int main()
{
    int number;
    int cf;
    int factor_found_flag;
    number = 1000000007;
    factor_found_flag = FACTOR_NOT_FOUND;
    for( cf = 2; cf * cf <= number; cf += 1)
    {
        if ( number % cf == 0)
        {
            factor_found_flag = FACTOR_FOUND;
            break;
        }
    }
        if ( factor_found_flag == FACTOR_NOT_FOUND )
            printf("Prime");
        else
            printf("Composite");
    return EXIT_SUCCESS;
}
