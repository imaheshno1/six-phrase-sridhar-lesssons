#include<stdio.h>
#include<stdlib.h>
// Big O(n)
/*
<1------------------------------------------------------------n>
<1                        n/2---------------------------------n>
                                no factor zone

<1.....fpf..........n/fpf....................................n>
*/
int main()
{
    // datatype var1
    int num;
    num = 1234567890;
    int check_factor;
    for ( check_factor = 1; check_factor <= num/2; check_factor+=1)
    {
        if ( num % check_factor == 0 )
            printf("%d ", check_factor);

    }
    printf("%d", num);
    return EXIT_SUCCESS;
}
