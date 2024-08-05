#include<stdio.h>
#include<stdlib.h>
void swap_val ( int val1 , int val2)
{
    int temp;
    temp = val1;
    val1 = val2;
    val2 = temp;
}
void swap  ( int & val1 , int & val2)
{
    int temp;
    temp = val1;
    val1 = val2;
    val2 = temp;
}

void swap_ref ( int *val1 , int *val2)

{
    int temp;
 /*
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
    */
    temp = val1[0];
    val1[0] = val2[0];
    val2[0] = temp;
}
int main()
{
    int n1;
    int n2;
    n1 = 100;
    n2 = 200;
    printf("before n1 = %d n2 = %d\n", n1, n2);
    swap_val(n1, n2);
    printf("after  n1 = %d n2 = %d\n", n1, n2);
    swap_ref(&n1, &n2);
    printf("after  n1 = %d n2 = %d\n", n1, n2);
    swap ( n1,  n2);
    printf("after  n1 = %d n2 = %d\n", n1, n2);



    return EXIT_SUCCESS;
}
