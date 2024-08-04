#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    int digit;
    int power;

    num = 1230000;
    // find the required power
    power = 1;
    while ( num / power > 9)
    {
        power*=10;
    }

    while ( power )
    {
    digit = num / power;
    printf("%d\n", digit);
    num = num % power;
    power /= 10;

    }






    return EXIT_SUCCESS;
}
