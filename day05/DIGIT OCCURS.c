#include<stdio.h>
#include<stdlib.h>
int main()
{

    int num;
    int d;
    int copy_num;
    int digit;

    num = 2637467;
    d = 1;

    copy_num = num;
    while ( copy_num )
    {
        digit = copy_num % 10;
        if ( digit == d)
        {
                break;
        }
        copy_num /= 10;
    }
    printf("%s", copy_num ? "true" : "false");


    return EXIT_SUCCESS;
}

