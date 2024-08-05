/*

factorial ( n ) = n * factorial( n - 1 )
*/
#include<stdio.h>
#include<stdlib.h>
int factorial ( int num);
static int factorial_utility (int data);
int main()
{
    int data;
    data = 10;
    printf("%d", factorial ( data ));
    return EXIT_SUCCESS;
}

int factorial ( int data )
{
    // set the required environment
    // call a utility that will  be recursive
   return factorial_utility(data);
}

static int factorial_utility (int data )
{
    if ( data == 0) return 1;
    return data * factorial_utility(data-1);
}

