#include<stdio.h>
#include<stdlib.h>
int main()
{

    int num;
    int digit;


    num = 6974;
    while ( num )
    {
    digit = num % 10; // QUERY
    printf("%d\n", digit);
    num /= 10;

    }


    return EXIT_SUCCESS;
}
