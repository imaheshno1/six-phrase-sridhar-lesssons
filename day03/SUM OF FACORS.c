/*

Perfect / Abundant / Deficient

Amicable Pairs

220 , 284

220 -> 284
1
2   110
4   55
5   44
10  22
11  20

284 -> 220

1
2   142
4    71

Betrothed Pairs

48 -> 76
1
2 24
3 16
4 12
6 8

75 -> 49
1
3  25
5  15
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int sof_num;
    int check_factor;
    num  = 284;
    for( check_factor = 2, sof_num = 1; check_factor*check_factor < num; check_factor += 1)
    {
        if ( num % check_factor == 0)
        {
            sof_num += ( check_factor + (num/check_factor));
        }
    }
    if ( check_factor * check_factor == num )
        sof_num += check_factor;
    printf("num = %d, and it SOF = %d\n", num, sof_num);


    return EXIT_SUCCESS;
}













