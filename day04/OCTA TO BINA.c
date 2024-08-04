/*


Octal       Binary
15746       1101111100110
30071       11000000111001

65421       110101100010001


  65421
LSD or MSD
0   000
1   001
2   010
3   011
4   100
5   101
6   110
7   111


*/


#include<stdio.h>
#include<stdlib.h>
//#define debug
int main()
{
    int octalNum;
    long long int binNum;
    int power;
    int digit;
    int copy;


    octalNum = 65421;
    copy = octalNum;

    binNum = 0;
    power = 1;
    while ( copy / power > 9)
    {
        power *= 10;
    }
    while ( power )
    {
    digit = copy / power ;
    switch ( digit )
    {
        case 0 : binNum = binNum * 1000 + 0; break;
        case 1 : binNum = binNum * 1000 + 1; break;
        case 2 : binNum = binNum * 1000 + 10; break;
        case 3 : binNum = binNum * 1000 + 11; break;
        case 4 : binNum = binNum * 1000 + 100; break;
        case 5 : binNum = binNum * 1000 + 101; break;
        case 6 : binNum = binNum * 1000 + 110; break;
        case 7 : binNum = binNum * 1000 + 111; break;

    }
    #ifdef debug
    printf("%lld ", binNum);
    #endif // debug
//    printf()
    copy = copy % power;
    power /= 10;

    }
    printf("(%d)8 = (%lld)2", octalNum, binNum);
    return EXIT_SUCCESS;
}















