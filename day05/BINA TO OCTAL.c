
#include<stdio.h>
#include<stdlib.h>
int main()
{

    long long int binary;
    int octal;
    int digits;
    int power;
    long long int copy;

    binary = 101000000000101;
    octal = 0;
    power = 1;

    copy = binary;
    while ( copy ) // while ( copy != 0 )
    {
    digits = copy % 1000;
    switch ( digits )
    {
    case 0 : octal = ( 0 * power ) + octal ; break;
    case 1 : octal = ( 1 * power ) + octal ; break;
    case 10: octal = ( 2 * power ) + octal ; break;
    case 11: octal = ( 3 * power ) + octal ; break;
    case 100: octal = ( 4 * power ) + octal ; break;
    case 101: octal = ( 5 * power ) + octal ; break;
    case 110: octal = ( 6 * power ) + octal ; break;
    case 111: octal = ( 7 * power ) + octal ; break;

    }
    power *= 10;
    copy = copy / 1000;

    }
    printf("(%lld)2 = (%d)8", binary, octal);












    return EXIT_SUCCESS;
}
