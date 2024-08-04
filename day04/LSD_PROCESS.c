#include<stdio.h>
#include<stdlib.h>
int main()
{

    int num;
    int digit;
    int nod_num;
    int sod_num;


    num = 6974; // populating
    // priming
    nod_num = 0;
    sod_num = 0;
    while ( num )
    {
    digit = num % 10; // QUERY
    printf("%d\n", digit);
    nod_num += 1;
    sod_num += digit;
    num /= 10;

    }
    printf("nod_num = %d\n", nod_num);
    printf("sod_num = %d\n", sod_num);


    return EXIT_SUCCESS;
}
