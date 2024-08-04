/*
Sum of Proper Divisors


28
1 2 4 7 14
28
Perfect
100
1 2 4 5 10 20 25 50
117
Abundant
10
1 2 5
8
deficient
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int check_factor;
    int sof_num;
    num = 220; // populating
    sof_num = 1; // priming
    for( check_factor = 2; check_factor <= num/2 ; check_factor+=1)
    {
        if ( num % check_factor  == 0)
        {
            sof_num += check_factor;
        }
    }
    printf("%d has sum of factors as %d", num, sof_num);

    return EXIT_SUCCESS;
}
















