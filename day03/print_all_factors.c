/*

32      1 2 4 8 16 32               6
100     1 2 4 5 10 20 25 50 100     9
35      1 5 7 35                    4
121     1 11 121                    3
49      1 7 49
169     1 13 169
'n'
1 to 'n'
*/



#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int check_factor;
    num = 1234567890;
    for ( check_factor = 1; check_factor <= num; check_factor += 1)
    {
        if ( num % check_factor == 0)
            printf("%d ", check_factor);
    }




    return EXIT_SUCCESS;
}


















