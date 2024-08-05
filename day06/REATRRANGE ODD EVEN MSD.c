#include<stdio.h>
#include<stdlib.h>
int main()
{

    int num;
    int copy;
    int digit;
    int power;
    int evenPower;
    int eg;
    int og;
    num = 1234567890;
    // MSD

    power = 1;
    while ( num / power > 9)
    {
        power *= 10;
    }
    eg = 0 ;
    og = 0;
    copy = num;
    evenPower = 1;
    while( power )
    {
        digit = copy / power;
        if ( digit % 2 == 0 )
        {
            eg = eg * 10 + digit;
            evenPower *= 10;
        }
        else
            og = og * 10 + digit;
        copy %= power;
        power /= 10;

    }
    int res;
    res = og * evenPower + eg;

    printf("num = %d, res = %d", num,res);
    return EXIT_SUCCESS;
}
