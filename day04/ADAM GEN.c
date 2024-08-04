/*
Adam Number

reverse of square of a number =
square of reverse of a number

13

169     961
31      961

square the number

reverse the squared number

reverse the number

square the reversed number



*/




#include<stdio.h>
#include<stdlib.h>

int main()
{

    int num;
    int sqr_num;
    int rev_num;
    int rev_sqr_num;
    int sqr_rev_num;

    int copy;
    int digit;

    for ( num = 1; num <= 100000; num += 1)
    {
        if ( num % 10 == 0)
            continue;
    sqr_num = num * num;

    // reverse the number
    copy = num;
    rev_num = 0;
    while ( copy )
    {
        digit = copy % 10;
        rev_num = rev_num * 10 + digit;
        copy /= 10;
    }
    // square the rev_num
    sqr_rev_num = rev_num * rev_num;
    // reverse the squared number
    copy = sqr_num;
    rev_sqr_num = 0;
    while ( copy )
    {
        digit = copy % 10;
        rev_sqr_num = rev_sqr_num * 10 + digit;
        copy /= 10;
    }
    if ( rev_sqr_num == sqr_rev_num)
        printf("%d ", num);
    }
    return EXIT_SUCCESS;
}















