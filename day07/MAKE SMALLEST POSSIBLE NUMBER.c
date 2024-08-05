/*
Given a number 'n' make the smallest possible number using all the digits in 'n'

Input  : 78313427
Output : 12334778

Input  : 3476038903
Output : 3003346789


*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int copy;
    int res;
    int digit;

    num = 78313427;
    num = 303045782;
    res = 0;
    int temp_digit;
    int first_digit_found;
    first_digit_found = 0;
    for( digit = 1; digit < 10; digit += 1)
    {
        copy = num;
        while ( copy )
        {
            temp_digit = copy % 10;
            if ( temp_digit == digit)
            {
                res = res * 10 + digit;
                printf("res = %d\n", res);
                first_digit_found = 1;
    //            break;
                //printf("res = %d\n", res);
            }

            copy/=10;
        }
//        if ( first_digit_found == 1)
  //          break;
    }

    printf("num = %d res = %d", num, res);


    return EXIT_SUCCESS;
}

























