#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int sod_num;
    int digit;
    int temp; // temporary sincerity sincere
    num = 6974;
    num = 153;
    sod_num = 0;
    temp = num;
    while ( num )
    {
    digit = num % 10;
    // process
    sod_num += digit;
    num /= 10;
    }
    num = temp;
    if ( num % sod_num == 0)
        printf("Harshad");
    else
        printf("Not Harshad");

    return EXIT_SUCCESS;
}
